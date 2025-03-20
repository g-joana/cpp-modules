#include "Zombie.hpp"

Zombie::Zombie (std::string n) {
    name = n;
}

void Zombie::announce() {
    std::cout << this->name << ": BraiiiiiiinnnzzzZ...";
}
