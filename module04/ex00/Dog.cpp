#include "Dog.hpp"
#include "Animal.hpp"

Dog::Dog(): Animal("Dog") {
    std::cout << "Dog default constructor" << std::endl;
}

Dog::Dog(Dog& src): Animal("Dog"){
    std::cout << "Dog copy constructor" << std::endl;
    *this = src;
}

Dog::~Dog() {
    std::cout << "Dog destructor" << std::endl;
}

Dog& Dog::operator=(Dog& src) {
    std::cout << "Dog copy assignment operator" << std::endl;
    if (this == &src)
        return src;
    this->type = src.type;
    return *this;
}

void Dog::makeSound() const {
    std::cout << "au au" << std::endl;
}
