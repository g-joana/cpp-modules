#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include <ostream>

class PresidentialPardonForm: public AForm {
    private:
        const std::string name;
        bool isSigned;
        const int gradeToSign;
        const int gradeToExec;

    public:
        PresidentialPardonForm(std::string name, int gradeToSign, int gradeToExec);
        ~PresidentialPardonForm();
        PresidentialPardonForm& operator=(const PresidentialPardonForm& src);
        std::string GradeTooHighException(std::string bureaucrat) const;
        std::string GradeTooLowException(std::string bureaucrat) const;

        std::string getName() const;
        bool getIsSigned() const;
        int getGradeToSign() const;
        int getGradeToExec() const;

        void beSigned(const Bureaucrat& obj);
};

std::ostream& operator<<(std::ostream& stream, PresidentialPardonForm& src);

#endif