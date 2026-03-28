#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

int main() {
    std::cout << "---> shrubbery creation form tests <---" << std::endl;
    {
        Bureaucrat joao("joão", 145);
        ShrubberyCreationForm f("form1");
        std::cout << joao << std::endl;
        std::cout << f << std::endl;
        joao.signForm(f);
        joao.executeForm(f); // should fail (needs 137)
        
        Bureaucrat antonio("antônio", 137);
        antonio.executeForm(f); // should work
    }

    std::cout << "\n---> robotomy request form tests <---" << std::endl;
    {
        Bureaucrat tone("tone", 72);
        RobotomyRequestForm f("form2");
        tone.signForm(f);
        tone.executeForm(f); // should fail (needs 45)
        
        Bureaucrat jony("jony", 45);
        jony.executeForm(f); // should work
    }

    std::cout << "\n---> presidential pardon form tests <---" << std::endl;
    {
        Bureaucrat toninho("toninho", 25);
        PresidentialPardonForm f("form3");
        toninho.signForm(f);
        toninho.executeForm(f); // should fail (needs 5)
        
        Bureaucrat boss("boss", 5);
        boss.executeForm(f); // should work
    }

    return 0;
}
