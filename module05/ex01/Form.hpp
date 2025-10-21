#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"
#include <ostream>
class Bureaucrat;

class Form {
    private:
        const std::string name;
        bool isSigned;
        const int gradeToSign;
        const int gradeToExec;

    public:
        Form(std::string name, int gradeToSign, int gradeToExec);
        Form(Form& src);
        ~Form();
        Form& operator=(const Form& src);
        class GradeTooHighException:public std::exception {
            public:
                const char *what() const throw();
        };
        class GradeTooLowException:public std::exception {
            public:
                const char *what() const throw();
        };
        std::string getName() const;
        bool getIsSigned() const;
        int getGradeToSign() const;
        int getGradeToExec() const;

        void beSigned(const Bureaucrat& obj);
};

std::ostream& operator<<(std::ostream& stream, Form &src);

#endif
