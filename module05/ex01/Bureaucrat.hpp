#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include "Form.hpp"
#include <ostream>
#include <string>

class Bureaucrat {
    private:
        const std::string name;
        int grade;
    public:
        Bureaucrat(std::string name, int grade);
        ~Bureaucrat();
        Bureaucrat& operator=(const Bureaucrat& src);
        std::string GradeTooHighException() const;
        std::string GradeTooLowException() const;
        int getGrade()const;
        std::string getName()const;
        Bureaucrat& operator++();
        Bureaucrat& operator--();
        void signForm(Form& form);
};

std::ostream& operator<<(std::ostream& stream, Bureaucrat &src);

#endif
