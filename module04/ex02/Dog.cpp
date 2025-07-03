#include "Dog.hpp"

Dog::Dog(): Animal("Dog") {
    std::cout << "Dog default constructor" << std::endl;
    this->brain = new Brain();
}

Dog::Dog(const Dog& src): Animal("Dog"){
    std::cout << "Dog copy constructor" << std::endl;
    this->type = src.type;
    this->brain = src.brain;
}

Dog::~Dog() {
    delete this->brain;
    std::cout << "Dog destructor" << std::endl;
}

Dog& Dog::operator=(const Dog& src) {
    std::cout << "Dog copy assignment operator" << std::endl;
    if (this == &src)
        return *this;
    this->type = src.type;
    this->brain = src.brain;
    return *this;
}

void Dog::makeSound() const {
    std::cout << "au au" << std::endl;
}

void Dog::setIdea(std::string idea) {
    this->brain->setIdea(idea);
    return;
}

void Dog::printIdeas() const {
    this->brain->printIdeas();
}
