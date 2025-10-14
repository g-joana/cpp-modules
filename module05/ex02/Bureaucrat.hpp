#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include "AForm.hpp"
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
       class GradeTooHighException:public std::exception {
            public:
                const char *what() const throw();
        };
        class GradeTooLowException:public std::exception {
            public:
                const char *what() const throw();
        };
        int getGrade()const;
        std::string getName()const;
        Bureaucrat& operator++();
        Bureaucrat& operator--();
        void signForm(AForm& form);
};

std::ostream& operator<<(std::ostream& stream, Bureaucrat &src);

#endif
