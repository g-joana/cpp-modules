#ifndef FRAGTRAP_H
# define FRAGTRAP_H

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class FragTrap : public ClapTrap {
    public:
        FragTrap(std::string name);
        FragTrap(FragTrap &src);
        ~FragTrap();
        FragTrap& operator=(FragTrap& src);

        void highFivesGuys();
        void attack(const std::string& target);
};

#endif
