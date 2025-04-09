#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include <string>

FragTrap::FragTrap(std::string name): ClapTrap(name) {
    std::cout << "FragTrap constructor called" << std::endl;
    this->name = name;
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
}

FragTrap::FragTrap(FragTrap& src): ClapTrap(src) {
    std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap& FragTrap::operator=(FragTrap& src) {
    if(this == &src)
        return *this;
    this->name = src.name;
    this->hitPoints = src.hitPoints;
    this->energyPoints = src.energyPoints;
    this->attackDamage = src.attackDamage;
    return *this;
}

void FragTrap::attack(const std::string& target){
    if (this->energyPoints <= 0 || this->hitPoints <= 0)
        return ;
    std::cout << "FragTrap " << this->name << " attacks " << target << " causing " << this->attackDamage << " points of damage!" << std::endl;
    this->energyPoints--;
}

void FragTrap::highFivesGuys(){
    if (this->energyPoints <= 0 || this->hitPoints <= 0)
        return ;
    std::cout << "Positive high fives request" << std::endl;
    this->energyPoints--;
}
