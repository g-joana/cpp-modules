#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
    ClapTrap first("first");
    ScavTrap second("second");
    
    first.attack("second");
    second.takeDamage(3); // first.attackDamage
    // second.printStatus();

    second.attack("first");
    first.takeDamage(4);
    // first.printStatus();

    second.beRepaired(3);
    // second.printStatus();

    second.guardGate();
}
