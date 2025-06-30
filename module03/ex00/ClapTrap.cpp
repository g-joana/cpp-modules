#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) {
    std::cout << "ClapTrap constructor called" << std::endl;
    this->name = name;
    this->hitPoints = 10;
    this->energyPoints = 10;
    this->attackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap& src) {
    std::cout << "ClapTrap copy constructor called" << std::endl;
    this->name = src.name;
    this->hitPoints = src.hitPoints;
    this->energyPoints = src.hitPoints;
    this->attackDamage = src.attackDamage;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& src) {
    std::cout << "ClapTrap copy assignment operator overload called" << std::endl;
    if(this == &src)
        return *this;
    this->name = src.name;
    this->hitPoints = src.hitPoints;
    this->energyPoints = src.energyPoints;
    this->attackDamage = src.attackDamage;
    return *this;
}

void ClapTrap::attack(const std::string& target){
    if (this->energyPoints <= 0 || this->hitPoints <= 0)
        return ;
    std::cout << "ClapTrap " << this->name << " attacks " << target << " causing " << this->attackDamage << " points of damage!" << std::endl;
    this->energyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount){
    if (this->energyPoints <= 0 || this->hitPoints <= 0)
        return ;
    std::cout << "ClapTrap " << this->name << " takes " << amount << " points of damage!" << std::endl;
    this->hitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount){
    if (this->energyPoints <= 0 || this->hitPoints <= 0)
        return ;
    std::cout << "ClapTrap " << this->name << " repares " << amount << " hit points!" << std::endl;
    this->hitPoints += amount;
    this->energyPoints--;
}
//
// void ClapTrap::printStatus(){
//     std::cout << "Clap trap: " << this->name << std::endl;
//     std::cout << "Hit points: " << this->hitPoints << std::endl;
//     std::cout << "Energy points: " << this->energyPoints << std::endl;
//     std::cout << "Attack damage: " << this->attackDamage << std::endl;
// }
