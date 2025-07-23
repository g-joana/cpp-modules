#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
    std::cout << "Wrong Animal default constructor" << std::endl;
    this->type = "";
}

WrongAnimal::WrongAnimal(std::string type){
    std::cout << "Wrong Animal default constructor" << std::endl;
    this->type = type;
}

WrongAnimal::WrongAnimal(const WrongAnimal& src){
    std::cout << "Wrong Animal copy constructor" << std::endl;
    this->type = src.type;
}

WrongAnimal::~WrongAnimal() {
    std::cout << "Wrong Animal destructor" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& src) {
    std::cout << "Wrong Animal copy assignment operator" << std::endl;
    if (this == &src)
        return *this;
    this->type = src.type;
    return *this;
}

void WrongAnimal::setType(std::string type) {
    std::cout << "Wrong Animal setType" << std::endl;
    this->type = type;
}

const std::string& WrongAnimal::getType() const{
    std::cout << "Wrong Animal getType" << std::endl;
    return  this->type;
}

void WrongAnimal::makeSound() const{
    std::cout << "Wrong basic sound" << std::endl;
}
