#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <ostream>

int main() {
    Cat tchego;
    Dog *ozzy = new Dog;
    // Animal * ozzy = new Dog(); // why it doesnt work?

    std::cout << "tchego: ";
    tchego.makeSound();
    std::cout << "ozzy: ";
    ozzy->makeSound();
    delete ozzy;
}
