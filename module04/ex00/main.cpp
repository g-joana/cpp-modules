#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <cstdlib>
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

    // const Animal* dog = new Dog();
    // Dog dog2;
    // Dog *dog3 = new Dog();
    // Dog *dog4(dog3);
    // std::cout << dog->getType() << " " << std::endl;
    // dog->makeSound();
    // delete dog;

    std::cout << std::endl;
    std::cout << "CONTRUCTORS" << std::endl;
    std::cout << "> new wrong animal (wrongCat):" << std::endl;
    const WrongAnimal* wrongCat = new WrongCat();
    std::cout << "> new cat (cat):" << std::endl;
    Animal* cat = new Cat();
    std::cout << "> new copy cat (copy_cat):" << std::endl;
    Animal* copyCat(cat);
    std::cout << "> new cat (cat2):" << std::endl;
    const Animal* cat2;
    std::cout << std::endl;
    std::cout << "MEMBER FUNCS" << std::endl;
    std::cout << "> cat2 = cat :" << std::endl;
    cat2 = cat;
    std::cout << "> type of cat :" << std::endl;
    std::cout << cat->getType() << std::endl;
    std::cout << std::endl;
    std::cout << "MAKE SOUND" << std::endl;
    std::cout << "> cat says :" << std::endl;
    cat->makeSound();
    std::cout << "> copyCat says :" << std::endl;
    copyCat->makeSound();
    std::cout << "> cat2 says :" << std::endl;
    cat2->makeSound();
    std::cout << "> wrong says :" << std::endl;
    wrongCat->makeSound();
    std::cout << std::endl;
    std::cout << "DELETE" << std::endl;
    std::cout << "> delete cat :" << std::endl;
    delete cat;
    std::cout << "> delete wrongCat :" << std::endl;
    // deletes wrong animal, does not delete wrong cat;
    delete wrongCat;
    return 0;
}
