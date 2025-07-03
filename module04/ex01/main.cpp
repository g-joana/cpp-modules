#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

// why cant i access dog's and cat's brain
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
