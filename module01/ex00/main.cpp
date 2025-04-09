#include "Zombie.hpp"

int main (void) {
    std::string name;
    
    while (1) {
        std::cout << "Who is that zombie? ";
        getline(std::cin, name);
        if (name == "")
            randomChump("juan");
        else
        {
            Zombie *z = newZombie(name);
            z->announce();
            delete z;
        }
        std::cout << std::endl;
    }
}
