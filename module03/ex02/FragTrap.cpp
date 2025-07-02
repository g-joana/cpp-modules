#include "FragTrap.hpp"
#include "ClapTrap.hpp"

FragTrap::FragTrap(std::string name): ClapTrap(name) {
    std::cout << "FragTrap constructor called" << std::endl;
    this->name = name;
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap& src): ClapTrap(src) {
    std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& src) {
    std::cout << "FragTrap copy assignment operator overload called" << std::endl;
    if(this == &src)
        return *this;
    this->name = src.name;
    this->hitPoints = src.hitPoints;
    this->energyPoints = src.energyPoints;
    this->attackDamage = src.attackDamage;
    return *this;
}

void FragTrap::attack(const std::string& target){
    std::cout << "FragTrap " << this->name << " attacks " << target << " causing " << this->attackDamage << " points of damage!" << std::endl;
    if (this->energyPoints <= 0 || this->hitPoints <= 0)
        return ;
    this->energyPoints--;
}

void FragTrap::highFivesGuys(){
    if (this->energyPoints <= 0 || this->hitPoints <= 0)
        return ;
    std::cout << "Positive high-fives request" << std::endl;
    this->energyPoints--;
}
