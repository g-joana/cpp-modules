#include "Bureaucrat.hpp"
#include <iostream>

int main() {
    while (1)
    {
        std::string name;
        int grade;
        std::cout << "Bureaucrat: ";
        std::cin >> name;
        std::cout << "Grade: ";
        std::cin >> grade;
        try {
            Bureaucrat temp = Bureaucrat(name, grade);
            std::cout << temp << std::endl;
            ++temp;
            std::cout << temp << std::endl;
            --temp;
            --temp;
            std::cout << temp << std::endl;
        }
        catch (const std::exception &exception) {
            std::cout << "Error: " << exception.what() << std::endl;
            continue ;
        }
    }
}
