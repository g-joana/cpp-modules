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
    this->type = src.type;
}

Animal::~Animal() {
    std::cout << "Animal destructor" << std::endl;
}

Animal& Animal::operator=(Animal& src) {
    if (this == &src)
        return src;
    this->type = src.type;
    return *this;
}
