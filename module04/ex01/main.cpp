// #include "WrongAnimal.hpp"
// #include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <iostream>

int main() {
    int i = 0;
    Animal *animals[10];
    // Cat gato;
    // gato.setIdea("miau?");
    // gato.printIdeas();

    std::cout << std::endl;
    std::cout << "CONTRUCTORS" << std::endl;
    while (i < 10)
    {
        if (i >= 5)
            animals[i] = new Cat();
        else
            animals[i] = new Dog();
        i++;
    }
    std::cout << std::endl;
    std::cout << "MAKE SOUND" << std::endl;
    i = 0;
    while (i < 10)
    {
        animals[i]->makeSound();
        i++;
    }
    while (i < 10)
    {
        animals[i]->makeSound();
        i++;
    }
    std::cout << std::endl;
    std::cout << "DELETE" << std::endl;
    i = 0;
    while (i < 10)
    {
        delete animals[i];
        i++;
    }
    return 0;
}
