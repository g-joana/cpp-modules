#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat(): Animal("Cat") {
    std::cout << "Cat default constructor" << std::endl;
    // zero-initializes (builtin types)
    this->brain = new Brain();
    // default-initializes - memory garbage
    // this->brain = new Brain;
}

Cat::Cat(Cat& src): Animal(src) {
    std::cout << "Cat copy constructor" << std::endl;
    *this = src;
}

Cat::~Cat() {
    std::cout << "Cat destructor" << std::endl;
    delete this->brain;
}

Cat& Cat::operator=(Cat& src) {
    std::cout << "Cat copy assignment operator" << std::endl;
    if (this == &src)
        return src;
    this->type = src.type;
    this->brain = src.brain;
    return *this;
}

void Cat::makeSound() const {
    std::cout << "miauuu" << std::endl;
}
