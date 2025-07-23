#include "Animal.hpp"

Animal::Animal(){
    std::cout << "Animal default constructor" << std::endl;
    this->type = "";
}

Animal::Animal(std::string type){
    std::cout << "Animal constructor" << std::endl;
    this->type = type;
}

Animal::Animal(const Animal& src){
    std::cout << "Animal copy constructor" << std::endl;
    this->type = src.type;
}

Animal::~Animal() {
    std::cout << "Animal destructor" << std::endl;
}

Animal& Animal::operator=(const Animal& src) {
    std::cout << "Animal copy assignment operator" << std::endl;
    if (this == &src)
        return *this;
    this->type = src.type;
    return *this;
}

void Animal::setType(std::string type) {
    std::cout << "Animal copy assignment operator" << std::endl;
    this->type = type;
}

const std::string& Animal::getType() const{
    std::cout << "Animal getType" << std::endl;
    return  this->type;
}

void Animal::makeSound() const{
    std::cout << "basic sound" << std::endl;
}
