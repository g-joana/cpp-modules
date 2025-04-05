#include "ClapTrap.hpp"

int main() {
    ClapTrap first("first");
    ClapTrap second("second");
    
    first.attack("second");
    second.takeDamage(3); // first.attackDamage
    // second.printStatus();

    second.attack("first");
    first.takeDamage(4);
    // first.printStatus();

    second.beRepaired(3);
    // second.printStatus();
}
