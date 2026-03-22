#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int main() {
    std::cout << "---> test form creation <---" << std::endl;
    try {
        Form f("28b", 50, 25);
        std::cout << f << std::endl;
    } catch (std::exception &e) {
        std::cout << "unexpected error: " << e.what() << std::endl;
    }

    std::cout << "\n---> test form grade too high <---" << std::endl;
    try {
        Form f("high", 0, 25);
    } catch (std::exception &e) {
        std::cout << "caught expected error: " << e.what() << std::endl;
    }

    std::cout << "\n---> test form grade too low <---" << std::endl;
    try {
        Form f("low", 151, 25);
    } catch (std::exception &e) {
        std::cout << "caught expected error: " << e.what() << std::endl;
    }

    std::cout << "\n---> test sign form success <---" << std::endl;
    try {
        Bureaucrat joao("joão", 45);
        Form f("28b", 50, 25);
        std::cout << joao << std::endl;
        std::cout << f << std::endl;
        joao.signForm(f);
        std::cout << f << std::endl;
    } catch (std::exception &e) {
        std::cout << "unexpected error: " << e.what() << std::endl;
    }

    std::cout << "\n---> test sign form failure <---" << std::endl;
    try {
        Bureaucrat antonio("antônio", 55);
        Form f("28b", 50, 25);
        std::cout << antonio << std::endl;
        std::cout << f << std::endl;
        antonio.signForm(f);
        std::cout << f << std::endl;
    } catch (std::exception &e) {
        std::cout << "unexpected error: " << e.what() << std::endl;
    }

    return 0;
}
