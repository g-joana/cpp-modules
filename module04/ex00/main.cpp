#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <cstdlib>
#include <ostream>

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

    std::cout << "> new wrong animal (wrong):" << std::endl;
    const WrongAnimal* wrong = new WrongCat();
    std::cout << "> new cat (cat):" << std::endl;
    Animal* cat = new Cat();
    std::cout << "> new copy cat (copy_cat):" << std::endl;
    Animal* copy_cat(cat);
    std::cout << "> new cat (cat2):" << std::endl;
    const Animal* cat2;
    std::cout << "> cat2 = cat :" << std::endl;
    cat2 = cat;
    std::cout << "> type of cat :" << std::endl;
    std::cout << cat->getType() << std::endl;
    std::cout << "> cat says :" << std::endl;
    cat->makeSound();
    std::cout << "> copy_cat says :" << std::endl;
    copy_cat->makeSound();
    std::cout << "> cat2 says :" << std::endl;
    cat2->makeSound();
    std::cout << "> wrong says :" << std::endl;
    wrong->makeSound();
    std::cout << "> delete cat :" << std::endl;
    delete cat;
    std::cout << "> delete wrong :" << std::endl;
    delete wrong;
    return 0;
}
