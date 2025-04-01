#include "Fixed.hpp"

int main(void) {
    
    Fixed aa(1);
    Fixed a(-1.4f);
    Fixed b( a );
    Fixed c;
    
    c = b;
    
    aa.toInt();
    std::cout << aa.getRawBits() << std::endl;
    std::cout << a.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << c.getRawBits() << std::endl;

    return 0;
}
