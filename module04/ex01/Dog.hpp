#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <string>
#include <iostream>

class Dog: public Animal {
    protected:
        std::string type;
        Brain *brain;
    public:
        Dog();
        Dog(Dog& src);
        ~Dog();
        Dog& operator=(Dog& src);
        void makeSound() const;

};

#endif
