#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <exception>
#include <ostream>
#include <string>

class AForm;

class Bureaucrat {
    private:
        const std::string name;
        int grade;
        Bureaucrat();
    public:
        Bureaucrat(const std::string& name, int grade);
        Bureaucrat(const Bureaucrat& other);
        ~Bureaucrat();
        Bureaucrat& operator=(const Bureaucrat& src);

        class GradeTooHighException : public std::exception {
            public:
                virtual const char *what() const throw();
        };
        class GradeTooLowException : public std::exception {
            public:
                virtual const char *what() const throw();
        };

        std::string getName() const;
        int getGrade() const;

        void incrementGrade();
        void decrementGrade();
        void signForm(AForm& form);
        void executeForm(AForm const & form);
};

std::ostream& operator<<(std::ostream& stream, const Bureaucrat &src);

#endif
