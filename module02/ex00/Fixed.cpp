#include "Fixed.hpp"

Fixed::Fixed() {
    this->number = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed& copy) {
    std::cout << "Copy constructor called" << std::endl;
    this->number = copy.getRawBits();
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

void Fixed::setRawBits(const int raw) {
    std::cout << "getRawBits member function called" << std::endl;
    this->number = raw;
}

int Fixed::getRawBits() const {
    std::cout << "getRawBits member function called" << std::endl;
    return this->number;
}
