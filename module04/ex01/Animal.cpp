#include "Animal.hpp"

Animal::Animal(){
    std::cout << "Animal default constructor" << std::endl;
    this->type = "";
}

Animal::Animal(std::string type){
    std::cout << "Animal default constructor" << std::endl;
    this->type = type;
}

Animal::Animal(Animal& src){
    std::cout << "Animal copy constructor" << std::endl;
    *this = src;
}

Animal::~Animal() {
    std::cout << "Animal destructor" << std::endl;
}

Animal& Animal::operator=(Animal& src) {
    if (this == &src)
        return src;
    *this = src;
    return *this;
}

void Animal::setType(std::string type) {
    this->type = type;
}

const std::string& Animal::getType() const{
    return  this->type;
}

void Animal::makeSound() const{
    std::cout << "basic sound" << std::endl;
}
