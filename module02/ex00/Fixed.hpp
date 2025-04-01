#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {
    private:
        int number;
        static const int fractionBits = 8;
    public:
        Fixed();
        Fixed(Fixed& copy);
        ~Fixed();

        void setRawBits( int const raw );
        int getRawBits( void ) const;
};

#endif
