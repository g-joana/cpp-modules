#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <ostream>

int main() {
    // Cat tchego;
    // Dog *ozzy = new Dog;
    // // Animal * ozzy = new Dog(); // why it doesnt work?
    //
    // std::cout << "tchego: ";
    // tchego.makeSound();
    // std::cout << "ozzy: ";
    // ozzy->makeSound();
    // delete ozzy;

    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    delete i;
    delete j;
    delete meta;
    return 0;
}
