#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

Intern::Intern() {}

Intern::Intern(Intern const & src) {
    *this = src;
}

Intern::~Intern() {}

Intern & Intern::operator=(Intern const & src) {
    (void)src;
    return *this;
}

AForm * Intern::makeShrubbery(std::string target) {
    return new ShrubberyCreationForm(target);
}

AForm * Intern::makeRobotomy(std::string target) {
    return new RobotomyRequestForm(target);
}

AForm * Intern::makePresidential(std::string target) {
    return new PresidentialPardonForm(target);
}

AForm * Intern::makeForm(std::string name, std::string target) {
    std::string names[] = {
        "shrubbery creation",
        "robotomy request",
        "presidential pardon"
    };

    AForm * (Intern::*creators[])(std::string) = {
        &Intern::makeShrubbery,
        &Intern::makeRobotomy,
        &Intern::makePresidential
    };

    for (int i = 0; i < 3; i++) {
        if (names[i] == name) {
            std::cout << "Intern creates " << name << std::endl;
            return (this->*creators[i])(target);
        }
    }

    std::cout << "Intern could not create " << name << " because it doesn't exist" << std::endl;
    return NULL;
}
