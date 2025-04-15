#include "ClapTrap.hpp"

int main() {
    ClapTrap first("first");
    ClapTrap second("second");
    
    first.attack("second");
    second.takeDamage(3);
    // second.printStatus();

    second.attack("first");
    first.takeDamage(0);
    // first.printStatus();

    second.beRepaired(3);
    // second.printStatus();
}
