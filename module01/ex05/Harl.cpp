#include "Harl.hpp"
#include <iostream>

Harl::Harl () {
    this->methods[0] = &Harl::debug;
    this->methods[1] = &Harl::info;
    this->methods[2] = &Harl::warning;
    this->methods[3] = &Harl::error;
    this->levels[0] = "debug";
    this->levels[1] = "info";
    this->levels[2] = "warning";
    this->levels[3] = "error";
}

void Harl::complain (std::string level) {
    int i = 0;

    while (i < 4)
    {
        if (this->levels[i] == level)
        {
            (this->*methods[i])();
            break ;
        }
        ++i;
    }
}

void Harl::debug() {
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info() {
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning() {
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error() {
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}
