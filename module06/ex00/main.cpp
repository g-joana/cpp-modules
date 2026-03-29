#include "ScalarConverter.hpp"
#include <iostream>

int main(int argc, char **argv) {
    if (argc == 2) {
        ScalarConverter::convert(argv[1]);
        return 0;
    }

    std::cout << "--- test 1: 0 << std::endl;
    ScalarConverter::convert("0");
    std::cout << std::endl;

    std::cout << "--- test 3: 42.0f << std::endl;
    ScalarConverter::convert("42.0f");
    std::cout << std::endl;

    std::cout << "--- test 4: 'a' << std::endl;
    ScalarConverter::convert("a");
    std::cout << std::endl;

    std::cout << "--- test 6: 'abc' << std::endl;
    ScalarConverter::convert("abc");
    std::cout << std::endl;

    return 0;
}
