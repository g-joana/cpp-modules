#include "WrongAnimal.hpp"
// #include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <iostream>

int main() {
    // Cat tchego;
    // Dog *ozzy = new Dog;
    //
    // std::cout << "tchego: ";
    // tchego.makeSound();
    // std::cout << "ozzy: ";
    // ozzy->makeSound();
    // delete ozzy;

    const WrongAnimal* wrong = new WrongAnimal();
    // const WrongAnimal* i = new WrongCat();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();
    wrong->makeSound();
    delete i;
    delete j;
    delete wrong;
    return 0;
}
