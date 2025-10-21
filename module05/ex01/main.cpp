#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int main() {
    while (1) {
        int gradeToSign;
        int gradeToExec;
        std::string formName;
        std::cout << "Form: ";
        std::cin >> formName;
        std::cout << "Grade to sign: ";
        std::cin >> gradeToSign;
        std::cout << "Grade to exec: ";
        std::cin >> gradeToExec;
        try {
                Form form = Form(formName, gradeToSign, gradeToExec);
                std::cout << form << std::endl;
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
                        std::cout << temp << std::endl << std::endl;
                        form.beSigned(temp);
                    }
                    catch (const std::exception &exception) {
                        std::cout << exception.what() << std::endl;
                    }
                    std::cout << form << std::endl;
                }
                break ;
        }
        catch (const std::exception &exception) {
            std::cout << std::endl << exception.what() << std::endl;
        }
    }
}