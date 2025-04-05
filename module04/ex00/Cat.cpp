#include "Cat.hpp"

Cat::Cat(): Animal("Cat") {
    std::cout << "Cat default constructor" << std::endl;
}

Cat::Cat(Cat& src): Animal("Cat") {
    std::cout << "Cat copy constructor" << std::endl;
    *this = src;
}

Cat::~Cat() {
    std::cout << "Cat destructor" << std::endl;
}

Cat& Cat::operator=(Cat& src) {
    std::cout << "Cat copy assignment operator" << std::endl;
    if (this == &src)
        return src;
    this->type = src.type;
    return *this;
}

void Cat::makeSound() {
    std::cout << "miauuu" << std::endl;
}
