#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat(): Animal("Cat") {
    std::cout << "Cat default constructor" << std::endl;
    // zero-initializes (builtin types)
    this->brain = new Brain();
    // default-initializes - memory garbage
    // this->brain = new Brain;
}

Cat::Cat(const Cat& src): Animal(src) {
    std::cout << "Cat copy constructor" << std::endl;
    this->type = src.type;
    this->brain = src.brain;
}

Cat::~Cat() {
    delete this->brain;
    std::cout << "Cat destructor" << std::endl;
}

Cat& Cat::operator=(const Cat& src) {
    std::cout << "Cat copy assignment operator" << std::endl;
    if (this == &src)
        return *this;
    this->type = src.type;
    this->brain = src.brain;
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
