#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include <ostream>

class RobotomyRequestForm: public AForm {
    private:
        const std::string name;
        bool isSigned;
        const int gradeToSign;
        const int gradeToExec;

    public:
        RobotomyRequestForm(std::string name, int gradeToSign, int gradeToExec);
        ~RobotomyRequestForm();
        RobotomyRequestForm& operator=(const RobotomyRequestForm& src);
        std::string GradeTooHighException(std::string bureaucrat) const;
        std::string GradeTooLowException(std::string bureaucrat) const;

        std::string getName() const;
        bool getIsSigned() const;
        int getGradeToSign() const;
        int getGradeToExec() const;

        void beSigned(const Bureaucrat& obj);
};

std::ostream& operator<<(std::ostream& stream, RobotomyRequestForm& src);

#endif