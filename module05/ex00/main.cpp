#include "Bureaucrat.hpp"
#include <iostream>

int main() {
    std::cout << "---> test valid bureaucrat" << std::endl;
    try {
        Bureaucrat b("joão", 2);
        std::cout << b << std::endl;
        b.incrementGrade();
        std::cout << "after increment: " << b << std::endl;
        b.decrementGrade();
        std::cout << "after decrement: " << b << std::endl;
    } catch (std::exception &e) {
        std::cout << "unexpected error: " << e.what() << std::endl;
    }

    std::cout << "\n---> test grade too high" << std::endl;
    try {
        Bureaucrat b("antônio", 0);
    } catch (std::exception &e) {
        std::cout << "caught expected error: " << e.what() << std::endl;
    }

    std::cout << "\n---> test grade too low" << std::endl;
    try {
        Bureaucrat b("tone", 151);
    } catch (std::exception &e) {
        std::cout << "caught expected error: " << e.what() << std::endl;
    }

    std::cout << "\n---> test increment at grade 1" << std::endl;
    try {
        Bureaucrat b("jony", 1);
        std::cout << b << std::endl;
        b.incrementGrade();
    } catch (std::exception &e) {
        std::cout << "caught expected error: " << e.what() << std::endl;
    }

    std::cout << "\n---> test decrement at grade 150" << std::endl;
    try {
        Bureaucrat b("toninho", 150);
        std::cout << b << std::endl;
        b.decrementGrade();
    } catch (std::exception &e) {
        std::cout << "caught expected error: " << e.what() << std::endl;
    }

    return 0;
}
