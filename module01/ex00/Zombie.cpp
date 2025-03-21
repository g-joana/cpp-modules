#include "Zombie.hpp"

Zombie::Zombie (std::string n) {
    name = n;
}

Zombie::~Zombie () {
    std::cout << this->name << ": Destroyed";
}

void Zombie::announce() {
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
