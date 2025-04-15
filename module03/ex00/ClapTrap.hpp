#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>

class ClapTrap {
    private:
        std::string name;
        int hitPoints;
        int energyPoints;
        int attackDamage;
    public:
        ClapTrap(std::string name);
        ClapTrap(ClapTrap& src);
        ~ClapTrap();
        ClapTrap& operator=(ClapTrap& src);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        // void printStatus();
};

#endif
