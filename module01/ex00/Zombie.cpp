#include "Zombie.hpp"

Zombie::Zombie (std::string n) {
    name = n;
}

Zombie::announce () {
    std::cout << name << ": BraiiiiiiinnnzzzZ..."
}