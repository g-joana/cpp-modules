#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat(): WrongAnimal("Wrong Cat") {
    std::cout << "Wrong Cat default constructor" << std::endl;
}

WrongCat::WrongCat(const WrongCat& src): WrongAnimal(src) {
    std::cout << "Wrong Cat copy constructor" << std::endl;
    this->type = src.type;
}

WrongCat::~WrongCat() {
    std::cout << "Wrong Cat destructor" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& src) {
    std::cout << "Wrong Cat copy assignment operator" << std::endl;
    if (this == &src)
        return *this;
    this->type = src.type;
    return *this;
}

void WrongCat::makeSound() const {
    std::cout << "wrong miauuu" << std::endl;
}
