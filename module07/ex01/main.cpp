#include <iostream>
#include <string>
#include "iter.hpp"

template <typename T>
void print(const T& x) {
    std::cout << x << std::endl;
}

int main( void ) {
    const int ints[] = {1, 2, 3, 4, 5};
    ::iter(ints, 5, print<int>);

    std::string strings[] = {"João", "Antônio", "Pires", "Rodrigues"};
    ::iter(strings, 4, print<std::string>);
    return 0;
}
