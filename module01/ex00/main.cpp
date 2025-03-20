#include "Zombie.hpp"

int main (void) {
    std::string zombieName;
    
    while (1) {
        std::cout << "zombie name: ";
        getline(std::cin, zombieName);
        // Zombie *zombie = newZombie(zombieName);
        Zombie z1(zombieName);
        z1.announce();
        break ;
    }
}
