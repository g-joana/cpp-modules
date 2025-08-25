#include "Bureaucrat.hpp"
#include <iostream>

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name), grade(grade) {
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::~Bureaucrat() {
}

std::string Bureaucrat::GradeTooHighException() {
    return this->getName() + "'s grade too high!";
}

std::string Bureaucrat::GradeTooLowException() {
    return this->getName() + "'s grade too low!";
}

int Bureaucrat::getGrade()const {
    return this->grade;
}

std::string Bureaucrat::getName()const {
    return this->name;
}

void Bureaucrat::operator++() {
    if (grade == 1)
        throw Bureaucrat::GradeTooHighException();
    this->grade--;
}

void Bureaucrat::operator--() {
    if (grade == 150)
        throw Bureaucrat::GradeTooLowException();
    this->grade++;
}

std::ostream& operator<<(std::ostream& stream, Bureaucrat &obj) {
    
    stream << obj.getName() << ", bureaucrat grade " << obj.getGrade();
    return stream;
}
