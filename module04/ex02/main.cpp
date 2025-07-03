#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

// add const to functions
// how to make animal non instantiable?
int main() {
    int i = 0;
    Animal *animals[10];

    while (i < 10)
    {
        if (i >= 5)
            animals[i] = new Cat();
        else
            animals[i] = new Dog();
        i++;
    }
    i = 0;
    while (i < 10)
    {
        animals[i]->makeSound();
        i++;
    }
    i = 0;
    while (i < 10)
    {
        animals[i]->makeSound();
        i++;
    }
    i = 0;
    while (i < 10)
    {
        delete animals[i];
        i++;
    }
    return 0;
}
