#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap(std::string name): ClapTrap(name) {
    std::cout << "ScavTrap constructor called" << std::endl;
    this->name = name;
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& src): ClapTrap(src.name) {
    std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& src) {
    std::cout << "ScavTrap copy assignment operator overload called" << std::endl;
    if(this == &src)
        return *this;
    this->name = src.name;
    this->hitPoints = src.hitPoints;
    this->energyPoints = src.energyPoints;
    this->attackDamage = src.attackDamage;
    return *this;
}

void ScavTrap::attack(const std::string& target){
    std::cout << "ScavTrap " << this->name << " attacks " << target << " causing " << this->attackDamage << " points of damage!" << std::endl;
    if (this->energyPoints <= 0 || this->hitPoints <= 0)
        return ;
    this->energyPoints--;
}

void ScavTrap::guardGate(){
    std::cout << "ScavTrap is now on Gate keeper mode!" << std::endl;
    if (this->energyPoints <= 0 || this->hitPoints <= 0)
        return ;
    this->energyPoints--;
}
