#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal("Wrong Cat") {
    std::cout << "Wrong Cat default constructor" << std::endl;
}

WrongCat::WrongCat(WrongCat& src): WrongAnimal(src) {
    std::cout << "Wrong Cat copy constructor" << std::endl;
    // *this = src;
}

WrongCat::~WrongCat() {
    std::cout << "Wrong Cat destructor" << std::endl;
}

WrongCat& WrongCat::operator=(WrongCat& src) {
    std::cout << "Wrong Cat copy assignment operator" << std::endl;
    if (this == &src)
        return src;
    this->type = src.type;
    return *this;
}

void WrongCat::makeSound() const {
    std::cout << "wrong miauuu" << std::endl;
}
