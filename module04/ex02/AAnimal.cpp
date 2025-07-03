#include "AAnimal.hpp"

AAnimal::AAnimal(){
    std::cout << "Animal default constructor" << std::endl;
    this->type = "";
}

AAnimal::AAnimal(std::string type){
    std::cout << "Animal constructor" << std::endl;
    this->type = type;
}

AAnimal::AAnimal(const AAnimal& src){
    std::cout << "Animal copy constructor" << std::endl;
    this->type = src.type;
}

AAnimal::~AAnimal() {
    std::cout << "Animal destructor" << std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal& src) {
    if (this == &src)
        return *this;
    this->type = src.type;
    return *this;
}

void AAnimal::setType(std::string type) {
    this->type = type;
}

const std::string& AAnimal::getType() const{
    return  this->type;
}

void AAnimal::makeSound() const{
    std::cout << "basic sound" << std::endl;
}
