#include "Fixed.hpp"
#include <ostream>
// https://en.cppreference.com/w/cpp/language/operators
// https://www.cprogramming.com/tutorial/floating_point/understanding_floating_point_representation.html
// https://web.archive.org/web/20231224143018/https://inst.eecs.berkeley.edu/~cs61c/sp06/handout/fixedpt.html
// https://en.cppreference.com/w/cpp/language/operators
// https://www.francescmm.com/orthodox-canonical-class-form/

// constructors
Fixed::Fixed() {
    // std::cout << "Default constructor called" << std::endl;
    this->number = 0;
}

Fixed::Fixed(const int n) {
    // std::cout << "Int constructor called" << std::endl;
    this->number = n << this->fractionBits;
}

Fixed::Fixed(const float n) {
    // std::cout << "Float constructor called" << std::endl;
    // fixed    =   numero(5.579) * 256(1 << 8, 100000000) = 5279;
    // parte fracionada: ultimos 8 bits (579)
    // parte inteira: primeiros 24bits (5); int = 4bytes, 32bits - 8 
    // s | iiiiiii iiiiiiii iiiiiiii | ffffffff
    // 2 elevado a 8(parte fracionada) == 256 em decimal, 10000000 em bin
    // << = * 2 elevado a x (x=0, 1, 2, 4, 8...), o mesmo que andar uma casa bin
    // >> = / 2 elevado a x
    // fixed    =   numero(5) * 256(1 << 8, 100000000) = ;
    // this->number = roundf(n * (1 << this->fractionBits));
    // o mesmo que: this->number = roundf(n * (100000000));
    this->number = roundf(n * (256));
}

Fixed::Fixed(const Fixed& src) {
    // std::cout << "Copy constructor called" << std::endl;
    // this->number = src.number;
    *this = src;
    // copy assignment operator
}

//overload =

// destructor
Fixed::~Fixed() {
    // std::cout << "Destructor called" << std::endl;
}

// member funcs
//  overloaded operators
Fixed&  Fixed::operator=(const Fixed &src) {
    // std::cout << "Copy assignment operator called" << std::endl;
    if (this != &src)
        this->number = src.number;
    return *this;
}

bool    Fixed::operator>(const Fixed& src){
    return this->number > src.number;
}
bool    Fixed::operator<(const Fixed& src){
    return this->number < src.number;
}
bool    Fixed::operator>=(const Fixed& src){
    return this->number >= src.number;
}
bool    Fixed::operator<=(const Fixed& src){
    return this->number <= src.number;
}
bool    Fixed::operator==(const Fixed& src){
    return this->number == src.number;
}
bool    Fixed::operator!=(const Fixed& src){
    return this->number != src.number;
}
Fixed  Fixed::operator+(const Fixed& src){
    Fixed sum(this->toFloat() + src.toFloat());
    return sum;
}
Fixed   Fixed::operator-(const Fixed& src){
    Fixed sub(this->toFloat() - src.toFloat());
    return sub;
}
Fixed  Fixed::operator*(const Fixed& src){
    Fixed mult(this->toFloat() * src.toFloat());
    return mult;
}
Fixed  Fixed::operator/(const Fixed& src){
    Fixed div(this->toFloat() / src.toFloat());
    return div;
}
Fixed  Fixed::operator++(int i){
    Fixed   before = *this;
    (void)i;
    this->number += 1;
    return before;
}
Fixed  Fixed::operator++(){
    this->number += 1;
    return *this;
}
Fixed  Fixed::operator--(int i){
    Fixed   before = *this;
    (void)i;
    this->number -= 1;
    return before;
}
Fixed  Fixed::operator--(){
    this->number -= 1;
    return *this;
}

//  convertion funcs
int Fixed::toInt( void ) const {
    return this->number >> this->fractionBits; // getRawBits?
}

float Fixed::toFloat( void ) const {
    return (float(this->getRawBits()) / (1 << fractionBits));
}

//  getters and setters
void Fixed::setRawBits(const int raw) {
    // std::cout << "getRawBits member function called" << std::endl;
    this->number = raw;
}

int Fixed::getRawBits() const {
    // std::cout << "getRawBits member function called" << std::endl;
    return this->number;
}

//  min and max
Fixed&   Fixed::min(Fixed& a, Fixed& b){
    if (a < b)
        return a;
    return b;
}
const Fixed&   Fixed::min(const Fixed& a, const Fixed& b){
    if (a.getRawBits() < b.getRawBits())
        return a;
    return b;
}
Fixed&   Fixed::max(Fixed& a, Fixed& b){
    if (a > b)
        return a;
    return b;
}
const Fixed&   Fixed::max(const Fixed& a, const Fixed& b){
    if (a.getRawBits() > b.getRawBits())
        return a;
    return b;
}

// operator overloading
// https://stackoverflow.com/questions/422600/canonical-operator-overloading
std::ostream &operator<<(std::ostream& stream, Fixed const& src ){
    stream << src.toFloat();
    return stream;
}
