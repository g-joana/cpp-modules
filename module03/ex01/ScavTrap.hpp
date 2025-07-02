#ifndef SCAVTRAP_H
# define SCAVTRAP_H

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class ScavTrap : public ClapTrap {
    public:
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap &src);
        ~ScavTrap();
        ScavTrap& operator=(const ScavTrap& src);

        void guardGate();
        // a const function means this is const
        // cannot modify any member variables unless they’re declared mutable
        void attack(const std::string& target);
};

#endif
