#include "Harl.hpp"
#include <cstdio>
#include <iostream>

int main() {
    std::string input;
    Harl harl;

    while (1)
    {
        getline(std::cin, input);
        harl.complain(input);
    }
}
