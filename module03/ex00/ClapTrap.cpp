#include "ClapTrap.hpp"


ClapTrap::ClapTrap(std::string name) {
    std::cout << "Constructor called" << std::endl;
    this->name = name;
    this->hitPoints = 10;
    this->energyPoints = 10;
    this->attackDamage = 0;
}

ClapTrap::~ClapTrap() {
    std::cout << "Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target){
    std::cout << "ClapTrap " << this->name << " attacks " << target << " causing " << this->attackDamage << " points of damage!" << std::endl;
    this->energyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount){
    std::cout << "ClapTrap " << this->name << " takes " << amount << " points of damage!" << std::endl;
    this->hitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount){
    std::cout << "ClapTrap " << this->name << " repares " << amount << " hit points!" << std::endl;
    this->hitPoints += amount;
    this->energyPoints--;
}

void ClapTrap::printStatus(){
    std::cout << "Clap trap: " << this->name << std::endl;
    std::cout << "Hit points: " << this->hitPoints << std::endl;
    std::cout << "Energy points: " << this->energyPoints << std::endl;
    std::cout << "Attack damage: " << this->attackDamage << std::endl;
}
