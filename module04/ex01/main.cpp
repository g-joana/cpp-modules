// #include "WrongAnimal.hpp"
// #include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <iostream>

int main() {

    Cat cat = Cat();
    {
        Cat temp = cat;
        temp.makeSound();
    }
    Dog dog = Dog();
    {
        Dog temp = Dog();
        temp.makeSound();
    }
    return 0;
}
