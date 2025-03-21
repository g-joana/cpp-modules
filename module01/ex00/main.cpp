#include "Zombie.hpp"

// std::string random() {
//
// }

int main (void) {
    std::string zombieName;
    
    while (1) {
        std::cout << "zombie name: ";
        getline(std::cin, zombieName);
        // Zombie *zombie = newZombie(zombieName);
        if (zombieName == "random")
        {
            // free(zombieName);
            // zombieName = random();
            zombieName = "tiago";
            Zombie z1(zombieName);
            z1.announce();
        }
        else
        {
            Zombie *z = newZombie(zombieName);
            z->announce();
        }

        std::cout << std::endl;
    }
}
