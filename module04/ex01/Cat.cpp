#include "Cat.hpp"
#include <iostream>

Cat::Cat(): Animal("Cat") {
    std::cout << "Cat default constructor" << std::endl;
    // zero-initializes (builtin types)
    this->brain = new Brain();
    // default-initializes - memory garbage
    // this->brain = new Brain;
}

Cat::Cat(const Cat& src): Animal("Cat") {
    std::cout << "Cat copy constructor" << std::endl;
    this->type = src.type;
    this->brain = new Brain(*src.brain);
}

Cat::~Cat() {
    delete this->brain;
    std::cout << "Cat destructor" << std::endl;
}

Cat& Cat::operator=(const Cat& src) {
    if (this == &src)
        return *this;
    this->type = src.type;
    this->brain = new Brain(*src.brain);
    return *this;
}

void Cat::makeSound() const {
    std::cout << "miauuu" << std::endl;
}

void Cat::setIdea(std::string idea) {
    this->brain->setIdea(idea);
    return;
}

void Cat::printIdeas() const {
    this->brain->printIdeas();
}
