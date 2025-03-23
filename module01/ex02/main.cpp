#include <cstdio>
#include <string>
#include <iostream>

int main()
{
    std::string brain = "HI THIS IS BRAIN";

    std::string* stringPTR;
    stringPTR = &brain;
    
    std::string& stringREF = brain;
    // a reference to a const type; an alias
    // needs to be initialized when declared
    // cannot be NULL
    // no need for dereferencing
    // cannot refer to a different object after initialization (?)
    // auto memory management

    std::cout << "memory address:" << std::endl;
    std::cout << &brain << std::endl;
    std::cout << stringPTR << std::endl;
    std::cout << &stringREF << std::endl << std::endl;

    std::cout << "variable value:" << std::endl;
    std::cout << brain << std::endl;
    std::cout << *stringPTR << std::endl;
    std::cout << stringREF << std::endl;
}
