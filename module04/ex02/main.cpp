#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main() {
    int i = 0;
    AAnimal *animals[10];
    // AAnimal animal;
    Cat gato;
    gato.setIdea("miau?");
    gato.printIdeas();

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
