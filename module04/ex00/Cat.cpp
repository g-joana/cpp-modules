#include "Cat.hpp"
#include <iostream>

Cat::Cat(): Animal("Cat") {
    std::cout << "Cat default constructor" << std::endl;
}

Cat::Cat(const Cat& src): Animal(src) {
    std::cout << "Cat copy constructor" << std::endl;
}

Cat::~Cat() {
    std::cout << "Cat destructor" << std::endl;
}

Cat& Cat::operator=(const Cat& src) {
    if (this == &src)
        return *this;
    this->type = src.type;
    return *this;
}

void Cat::makeSound() const {
    std::cout << "miauuu" << std::endl;
}
