#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"
#include <ostream>

class Form {
    private:
        const std::string name;
        bool isSigned;
        const int gradeToSign;
        const int gradeToExec;

    public:
        Form(std::string name, int gradeToSign, int gradeToExec);
        ~Form();
        Form& operator=(const Form& src);
        std::string GradeTooHighException(std::string bureaucrat) const;
        std::string GradeTooLowException(std::string bureaucrat) const;

        std::string getName() const;
        bool getIsSigned() const;
        int getGradeToSign() const;
        int getGradeToExec() const;

        void beSigned(const Bureaucrat& obj);
};

std::ostream& operator<<(std::ostream& stream, Form &src);

#endif
