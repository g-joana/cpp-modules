#include "Bureaucrat.hpp"
#include <iostream>

Bureaucrat::Bureaucrat() : name("default"), grade(150) {}

Bureaucrat::Bureaucrat(const std::string& name, int grade) : name(name), grade(grade) {
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : name(other.name), grade(other.grade) {}

Bureaucrat::~Bureaucrat() {}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& src) {
    if (this != &src) {
        this->grade = src.grade;
    }
    return *this;
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
    return "grade too high!";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
    return "grade too low!";
}

int Bureaucrat::getGrade() const {
    return this->grade;
}

std::string Bureaucrat::getName() const {
    return this->name;
}

void Bureaucrat::incrementGrade() {
    if (grade == 1)
        throw Bureaucrat::GradeTooHighException();
    this->grade--;
}

void Bureaucrat::decrementGrade() {
    if (grade == 150)
        throw Bureaucrat::GradeTooLowException();
    this->grade++;
}

std::ostream& operator<<(std::ostream& stream, const Bureaucrat &obj) {
    stream << obj.getName() << ", bureaucrat grade " << obj.getGrade() << ".";
    return stream;
}
