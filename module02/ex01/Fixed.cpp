#include "Fixed.hpp"
#include <ostream>
// https://en.cppreference.com/w/cpp/language/operators
// https://www.cprogramming.com/tutorial/floating_point/understanding_floating_point_representation.html
// https://web.archive.org/web/20231224143018/https://inst.eecs.berkeley.edu/~cs61c/sp06/handout/fixedpt.html

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
    this->number = roundf(n * (1 << this->fractionBits));
}

Fixed::Fixed(const Fixed& src) {
    std::cout << "Copy constructor called" << std::endl;
    // this->number = src.number;
    *this = src;
    // copy assignment operator
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

Fixed&  Fixed::operator=(const Fixed &src) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &src)
        this->number = src.number;
    return *this;
}

std::ostream &operator<<(std::ostream& stream, Fixed const& src ){
    stream << src.toFloat();
    return stream;
}

int Fixed::toInt( void ) const {
    return this->number >> this->fractionBits; // getRawBits?
}

float Fixed::toFloat( void ) const {
    return (float(this->getRawBits()) / (1 << fractionBits));
}

void Fixed::setRawBits(const int raw) {
    std::cout << "getRawBits member function called" << std::endl;
    this->number = raw;
}

int Fixed::getRawBits() const {
    std::cout << "getRawBits member function called" << std::endl;
    return this->number;
}
