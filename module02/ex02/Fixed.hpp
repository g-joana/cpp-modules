#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>
#include <ostream>

class Fixed {
    private:
        int number;
        static const int fractionBits = 8;
    public:
        Fixed();
        Fixed(int n);
        Fixed(float n);
        Fixed(const Fixed& src);
        ~Fixed();

        Fixed&  operator=(const Fixed& src);
        bool    operator>(const Fixed& src);
        bool    operator<(const Fixed& src);
        bool    operator>=(const Fixed& src);
        bool    operator<=(const Fixed& src);
        bool    operator==(const Fixed& src);
        bool    operator!=(const Fixed& src);
        Fixed  operator+(const Fixed& src);
        Fixed  operator-(const Fixed& src);
        Fixed  operator*(const Fixed& src);
        Fixed  operator/(const Fixed& src);
        Fixed  operator++(int i);
        Fixed  operator--(int i);
        Fixed  operator++();
        Fixed  operator--();

        void setRawBits( int const raw );
        int getRawBits( void ) const;

        int toInt( void ) const;
        float toFloat( void ) const;

        static Fixed&   min(Fixed& a, Fixed& b);
        static const Fixed&   min(const Fixed& a, const Fixed& b);
        static Fixed&   max(Fixed& a, Fixed& b);
        static const Fixed&   max(const Fixed& a, const Fixed& b);
};

std::ostream&   operator<<( std::ostream& stream, Fixed const& src );

#endif
