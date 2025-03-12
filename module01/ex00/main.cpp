#include "Zombie.hpp"

int main (void) {
    std::string zombieName;
    
    while (1) {
        std::cout << "zombie name: ";
        getline(std::cin, zombieName);
        Zombie *zombie = newZombie(zombieName);
        zombie->announce();
        break ;
    }
}