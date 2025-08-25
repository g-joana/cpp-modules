#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <ostream>
#include <string>

class Bureaucrat {
    private:
        const std::string name;
        int grade;
    public:
        Bureaucrat(std::string name, int grade);
        ~Bureaucrat();
        std::string GradeTooHighException();
        std::string GradeTooLowException();
        int getGrade()const;
        std::string getName()const;
        void operator++();
        void operator--();
};

std::ostream& operator<<(std::ostream& stream, Bureaucrat &src);

#endif
