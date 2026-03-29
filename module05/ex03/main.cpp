#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include <iostream>

int main() {
    Intern someRandomIntern;
    AForm* form;

    form = someRandomIntern.makeForm("robotomy request", "form1");
    if (form) {
        Bureaucrat b("Bureaucrat", 1);
        b.signForm(*form);
        b.executeForm(*form);
        delete form;
    }

    std::cout << std::endl;
    form = someRandomIntern.makeForm("shrubbery creation", "form2");
    if (form) {
        Bureaucrat b("Bureaucrat", 1);
        b.signForm(*form);
        b.executeForm(*form);
        delete form;
    }

    std::cout << std::endl;
    form = someRandomIntern.makeForm("presidential pardon", "form3");
    if (form) {
        Bureaucrat b("Bureaucrat", 1);
        b.signForm(*form);
        b.executeForm(*form);
        delete form;
    }

    std::cout << std::endl;
    form = someRandomIntern.makeForm("unknown form", "form4");
    if (form) {
        delete form;
    }

    return 0;
}
