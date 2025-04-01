#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {
    private:
        int number;
        static const int fractionBits = 8;
    public:
        Fixed();
        Fixed(int n);
        Fixed(float n);
        Fixed(Fixed& copy);
        ~Fixed();

        void setRawBits( int const raw );
        int getRawBits( void ) const;

        int toInt( void ) const;
        float toFloat( void ) const;
};

#endif
