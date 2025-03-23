#include "Zombie.hpp"

int main (void) {
    // Zombie *horde;
    std::string line;
    int ammount;
    
    while (1) {
        std::cout << "How many zombies? ";
        getline(std::cin, line);
        ammount = atoi(line.c_str());
        if (ammount < 1)
            continue;
        std::cout << "Zombie name: ";
        getline(std::cin, line);
        Zombie *horde = zombieHorde(ammount, line);
        delete []horde;
    }
}
