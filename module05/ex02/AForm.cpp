#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <iostream>

AForm::AForm(std::string name, int gradeToSign, int gradeToExec) : name(name), gradeToSign(gradeToSign), gradeToExec(gradeToExec) {
    this->isSigned = false;
}

AForm::~AForm() {
}

std::string AForm::GradeTooHighException(std::string bureaucrat) const{
    return bureaucrat + " couldn't sign " + this->getName() + " because of grade too high!";
}

std::string AForm::GradeTooLowException(std::string bureaucrat) const{
    return bureaucrat + " couldn't sign " + this->getName() + " because of grade too low!";
}

std::string AForm::getName() const {
    return this->name;
}
bool AForm::getIsSigned() const {
    return this->isSigned;
}
int AForm::getGradeToSign() const {
    return this->gradeToSign;
}
int AForm::getGradeToExec() const{
    return this->gradeToExec;
}

std::ostream& operator<<(std::ostream& stream, AForm &obj) {

    stream << "AForm: " << obj.getName() << std::endl;
    stream << "- signed: " << obj.getIsSigned() << std::endl;
    stream << "- grade to sign: " << obj.getGradeToSign() << std::endl;
    stream << "- grade to execute: " << obj.getGradeToExec() << std::endl;
    return stream;
}

void AForm::beSigned(const Bureaucrat& obj){
    if (obj.getGrade() > this->getGradeToSign())
    {
        throw GradeTooLowException(obj.getName());
        return ;
    }
    std::cout << obj.getName() << " signed " << this->getName() << std::endl;
}
