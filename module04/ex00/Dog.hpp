#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include <string>
#include <iostream>

class Dog: public Animal {
    protected:
        std::string type;
    public:
        Dog();
        Dog(const Dog& src);
        ~Dog();
        Dog& operator=(const Dog& src);
        void makeSound() const;
};

#endif
