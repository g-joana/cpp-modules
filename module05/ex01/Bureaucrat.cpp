#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name), grade(grade) {
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::~Bureaucrat() {
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
    return "grade too high!";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
    return "grade too low!";
}

int Bureaucrat::getGrade()const {
    return this->grade;
}

std::string Bureaucrat::getName()const {
    return this->name;
}

Bureaucrat& Bureaucrat::operator++() {
    if (grade == 1)
        throw Bureaucrat::GradeTooHighException();
    this->grade--;
    return *this;
}

Bureaucrat& Bureaucrat::operator--() {
    if (grade == 150)
        throw Bureaucrat::GradeTooLowException();
    this->grade++;
    return *this;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& src) {
    this->grade = src.grade;
    // name is const, cannot be altered
    return *this;
}

std::ostream& operator<<(std::ostream& stream, Bureaucrat &obj) {
    
    stream << obj.getName() << ", bureaucrat grade " << obj.getGrade();
    return stream;
}

void Bureaucrat::signForm(Form& form) {
    try {
        form.beSigned(*this);
    }
    catch (const std::string &exception) {
        std::cout << "Error: " << exception << std::endl;
    }
}
