#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
    private:
        int number;
        static const int fractionBits = 8;
    public:
        Fixed();
        Fixed(int n);
        Fixed(float n);
        Fixed(const Fixed& copy);
        ~Fixed();

        std::ostream &operator<<( Fixed const& src );
        void setRawBits( int const raw );
        int getRawBits( void ) const;

        int toInt( void ) const;
        float toFloat( void ) const;
};

#endif
