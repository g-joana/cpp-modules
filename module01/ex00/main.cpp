#include "Zombie.hpp"

// std::string random() {
//
// }

int main (void) {
    std::string name;
    
    while (1) {
        std::cout << "zombie name: ";
        getline(std::cin, name);
        if (name == "random")
        {
            name = "tiago";
            Zombie z1(name);
            z1.announce();
        }
        else
        {
            Zombie *z = newZombie(name);
            z->announce();
            delete z;
        }
        std::cout << std::endl;
    }
}
