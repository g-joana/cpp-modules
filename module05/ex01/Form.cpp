#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : name("default"), isSigned(false), gradeToSign(150), gradeToExec(150) {}

Form::Form(const std::string& name, int gradeToSign, int gradeToExec) 
    : name(name), isSigned(false), gradeToSign(gradeToSign), gradeToExec(gradeToExec) {
    if (gradeToSign < 1 || gradeToExec < 1)
        throw Form::GradeTooHighException();
    if (gradeToSign > 150 || gradeToExec > 150)
        throw Form::GradeTooLowException();
}

Form::Form(const Form& src) 
    : name(src.name), isSigned(src.isSigned), gradeToSign(src.gradeToSign), gradeToExec(src.gradeToExec) {}

Form::~Form() {}

Form& Form::operator=(const Form& src) {
    if (this != &src) {
        this->isSigned = src.isSigned;
    }
    return *this;
}

const char* Form::GradeTooHighException::what() const throw() {
    return "form grade too high!";
}

const char* Form::GradeTooLowException::what() const throw() {
    return "form grade too low!";
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

int Form::getGradeToExec() const {
    return this->gradeToExec;
}

void Form::beSigned(const Bureaucrat& obj) {
    if (obj.getGrade() > gradeToSign)
        throw Form::GradeTooLowException();
    isSigned = true;
}

std::ostream& operator<<(std::ostream& stream, const Form &obj) {
    stream << "form " << obj.getName() << " (signed: " << (obj.getIsSigned() ? "yes" : "no") 
           << ", grade to sign: " << obj.getGradeToSign() 
           << ", grade to exec: " << obj.getGradeToExec() << ").";
    return stream;
}
