#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm() : name("default"), isSigned(false), gradeToSign(150), gradeToExec(150) {}

AForm::AForm(const std::string& name, int gradeToSign, int gradeToExec) 
    : name(name), isSigned(false), gradeToSign(gradeToSign), gradeToExec(gradeToExec) {
    if (gradeToSign < 1 || gradeToExec < 1)
        throw AForm::GradeTooHighException();
    if (gradeToSign > 150 || gradeToExec > 150)
        throw AForm::GradeTooLowException();
}

AForm::AForm(const AForm& src) 
    : name(src.name), isSigned(src.isSigned), gradeToSign(src.gradeToSign), gradeToExec(src.gradeToExec) {}

AForm::~AForm() {}

AForm& AForm::operator=(const AForm& src) {
    if (this != &src) {
        this->isSigned = src.isSigned;
    }
    return *this;
}

const char* AForm::GradeTooHighException::what() const throw() {
    return "form grade too high!";
}

const char* AForm::GradeTooLowException::what() const throw() {
    return "form grade too low!";
}

const char* AForm::NotSignedException::what() const throw() {
    return "form is not signed!";
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

int AForm::getGradeToExec() const {
    return this->gradeToExec;
}

void AForm::beSigned(const Bureaucrat& obj) {
    if (obj.getGrade() > gradeToSign)
        throw AForm::GradeTooLowException();
    isSigned = true;
}

std::ostream& operator<<(std::ostream& stream, const AForm &obj) {
    stream << "form " << obj.getName() << " (signed: " << (obj.getIsSigned() ? "yes" : "no") 
           << ", grade to sign: " << obj.getGradeToSign() 
           << ", grade to exec: " << obj.getGradeToExec() << ").";
    return stream;
}
