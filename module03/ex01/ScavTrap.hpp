#ifndef SCAVTRAP_H
# define SCAVTRAP_H

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class ScavTrap : public ClapTrap {
    public:
        ScavTrap(std::string name);
        ScavTrap(ScavTrap &src);
        ~ScavTrap();
        ScavTrap& operator=(ScavTrap& src);

        void guardGate();
        void attack(const std::string& target);
};

#endif
