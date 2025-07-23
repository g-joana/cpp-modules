#include "Dog.hpp"

Dog::Dog(): Animal("Dog") {
    std::cout << "Dog default constructor" << std::endl;
}

Dog::Dog(const Dog& src): Animal("Dog"){
    std::cout << "Dog copy constructor" << std::endl;
    this->type = src.type;
}

Dog::~Dog() {
    std::cout << "Dog destructor" << std::endl;
}

Dog& Dog::operator=(const Dog& src) {
    std::cout << "Dog copy assignment operator" << std::endl;
    if (this == &src)
        return *this;
    this->type = src.type;
    return *this;
}

void Dog::makeSound() const {
    std::cout << "au au" << std::endl;
}
