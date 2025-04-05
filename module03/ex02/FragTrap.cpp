#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include <string>

FragTrap::FragTrap(std::string name): ClapTrap(name) {
    std::cout << "FragTrap constructor called" << std::endl;
    this->name = name;
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
}

FragTrap::FragTrap(FragTrap& src): ClapTrap(src.name) {
    std::cout << "FragTrap copy constructor called" << std::endl;
    *this = src;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap& FragTrap::operator=(FragTrap& src) {
    *this = src;
    return *this;
}

void FragTrap::attack(const std::string& target){
    std::cout << "FragTrap " << this->name << " attacks " << target << " causing " << this->attackDamage << " points of damage!" << std::endl;
    this->energyPoints--;
}

void FragTrap::highFivesGuys(){
    std::cout << "Positive high fives request" << std::endl;
    this->energyPoints--;
}
