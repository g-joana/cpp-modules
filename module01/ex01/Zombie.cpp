#include "Zombie.hpp"

Zombie::Zombie () {
    this->name = "";
}

Zombie::Zombie (std::string n) {
    this->name = n;
}

Zombie::~Zombie () {
    std::cout << this->name << ": Destroyed" << std::endl;
}

void Zombie::announce() {
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name) {
    this->name = name;
}
