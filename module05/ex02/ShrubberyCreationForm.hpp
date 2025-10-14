#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include <ostream>

class ShubberyCreationForm: public AForm {
    private:
        const std::string name;
        bool isSigned;
        const int gradeToSign;
        const int gradeToExec;

    public:
        ShubberyCreationForm(std::string name, int gradeToSign, int gradeToExec);
        ~ShubberyCreationForm();
        ShubberyCreationForm& operator=(const ShubberyCreationForm& src);
        std::string GradeTooHighException(std::string bureaucrat) const;
        std::string GradeTooLowException(std::string bureaucrat) const;

        std::string getName() const;
        bool getIsSigned() const;
        int getGradeToSign() const;
        int getGradeToExec() const;

        void beSigned(const Bureaucrat& obj);
};

std::ostream& operator<<(std::ostream& stream, ShubberyCreationForm& src);

#endif