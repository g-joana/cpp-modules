#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <iostream>

Form::Form(std::string name, int gradeToSign, int gradeToExec) : name(name), gradeToSign(gradeToSign), gradeToExec(gradeToExec) {
    this->isSigned = false;
}

Form::~Form() {
}

std::string Form::GradeTooHighException(std::string bureaucrat) const{
    return bureaucrat + " couldn't sign " + this->getName() + " because of grade too high!";
}

std::string Form::GradeTooLowException(std::string bureaucrat) const{
    return bureaucrat + " couldn't sign " + this->getName() + " because of grade too low!";
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
        throw GradeTooLowException(obj.getName());
        return ;
    }
    std::cout << obj.getName() << " signed " << this->getName() << std::endl;
}
