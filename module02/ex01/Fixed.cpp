#include "Fixed.hpp"

Fixed::Fixed() {
    this->number = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int n) {
    std::cout << "Int constructor called" << std::endl;
    this->number = n << this->fractionBits;
}

Fixed::Fixed(const float n) {
    std::cout << "Float constructor called" << std::endl;
    this->number = n * (1 << this->fractionBits);
}

Fixed::Fixed(Fixed& copy) {
    std::cout << "Copy constructor called" << std::endl;
    this->number = copy.getRawBits();
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

int Fixed::toInt( void ) const {
    int ret;
    ret = this->number >> this->fractionBits;
    return ret;
}


// float Fixed::toFloat( void ) const {
// }

void Fixed::setRawBits(const int raw) {
    std::cout << "getRawBits member function called" << std::endl;
    this->number = raw;
}

int Fixed::getRawBits() const {
    std::cout << "getRawBits member function called" << std::endl;
    return this->number;
}
