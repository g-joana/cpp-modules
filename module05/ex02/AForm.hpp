#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"
#include <ostream>

class AForm {
    private:
        const std::string name;
        bool isSigned;
        const int gradeToSign;
        const int gradeToExec;

    public:
        AForm(std::string name, int gradeToSign, int gradeToExec);
        virtual ~AForm();
        AForm& operator=(const AForm& src);
        std::string GradeTooHighException(std::string bureaucrat) const;
        std::string GradeTooLowException(std::string bureaucrat) const;

        std::string getName() const;
        bool getIsSigned() const;
        int getGradeToSign() const;
        int getGradeToExec() const;

        void beSigned(const Bureaucrat& obj);
};

std::ostream& operator<<(std::ostream& stream, AForm &src);

#endif