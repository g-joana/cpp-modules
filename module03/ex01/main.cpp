#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
    ClapTrap first("clap");
    ScavTrap second("scav");
    
    first.attack("scav");
    second.takeDamage(3); // first.attackDamage
    // second.printStatus();

    second.attack("clap");
    first.takeDamage(4);
    // first.printStatus();

    second.beRepaired(3);
    // second.printStatus();

    second.guardGate();
}
