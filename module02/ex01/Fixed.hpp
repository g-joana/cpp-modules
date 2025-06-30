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
        Fixed(const Fixed& copy);
        Fixed&  operator=(const Fixed &src);
        ~Fixed();


        void setRawBits( int const raw );
        int getRawBits( void ) const;

        int toInt( void ) const;
        float toFloat( void ) const;
};

std::ostream&   operator<<( std::ostream& stream, Fixed const& src );

#endif
