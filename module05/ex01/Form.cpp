#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <iostream>

Form::Form(std::string name, int gradeToSign, int gradeToExec) : name(name), gradeToSign(gradeToSign), gradeToExec(gradeToExec) {
    this->isSigned = false;
	if (this->gradeToSign < 1 || this->gradeToExec < 1) {
        std::cout << this->getName() << " form could not be created: ";
		throw Form::GradeTooHighException();
	}
	if (this->gradeToSign > 150 || this->gradeToExec > 150) {
        std::cout << this->getName() << " form could not be created: ";
		throw Form::GradeTooLowException();
    }
}

Form::Form(Form& src) : name(src.name), gradeToSign(src.gradeToSign), gradeToExec(src.gradeToExec) {
    this->isSigned = false;
}

Form& Form::operator=(const Form& src) {
    if (this != &src) {
        this->isSigned = src.isSigned;
    }
    return *this;
}

Form::~Form() {
}

const char* Form::GradeTooHighException::what() const throw() {
    return "grade too high!";
}

const char* Form::GradeTooLowException::what() const throw() {
    return "grade too low!";
}

std::string Form::getName() const {
    return this->name;
}
bool Form::getIsSigned() const {
    return this->isSigned;
}
int Form::getGradeToSign() const {
    return this->gradeToSign;
}
int Form::getGradeToExec() const{
    return this->gradeToExec;
}

std::ostream& operator<<(std::ostream& stream, Form &obj) {

    stream << "Form: " << obj.getName() << std::endl;
    stream << "- signed: " << obj.getIsSigned() << std::endl;
    stream << "- grade to sign: " << obj.getGradeToSign() << std::endl;
    stream << "- grade to execute: " << obj.getGradeToExec() << std::endl;
    return stream;
}

void Form::beSigned(const Bureaucrat& obj){
    if (obj.getGrade() > this->getGradeToSign())
    {
        std::cout << obj.getName() << " couldn't sign " << this->getName() << ": ";
        throw GradeTooLowException();
        return ;
    }
    this->isSigned = true;
    std::cout << obj.getName() << " signed " << this->getName() << std::endl;
}