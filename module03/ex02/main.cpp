#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {
    ClapTrap first("clap");
    ScavTrap second("scav");
    FragTrap third("frag");
    FragTrap fourth(third);
    
    first.attack("scav");
    second.takeDamage(3);
    // second.printStatus();

    second.attack("clap");
    first.takeDamage(4);
    // first.printStatus();

    third.attack("clap");
    first.takeDamage(4);

    second.beRepaired(3);
    // second.printStatus();

    second.guardGate();
    third.highFivesGuys();
}
