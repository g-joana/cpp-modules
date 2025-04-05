#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include <string>

ScavTrap::ScavTrap(std::string name): ClapTrap(name) {
    std::cout << "ScavTrap constructor called" << std::endl;
    this->name = name;
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
}

ScavTrap::ScavTrap(ScavTrap& src): ClapTrap(src.name) {
    std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap destructor called" << std::endl;
}

void ScavTrap::attack(const std::string& target){
    std::cout << "ScavTrap " << this->name << " attacks " << target << " causing " << this->attackDamage << " points of damage!" << std::endl;
    this->energyPoints--;
}

void ScavTrap::guardGate(){
    std::cout << "ScavTrap is now on Gate keeper mode!" << std::endl;
    this->energyPoints--;
}
