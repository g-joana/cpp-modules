#ifndef DOG_HPP
# define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"
#include <string>
#include <iostream>

class Dog: public AAnimal {
    protected:
        std::string type;
        Brain *brain;
    public:
        Dog();
        Dog(const Dog& src);
        ~Dog();
        Dog& operator=(const Dog& src);
        void makeSound() const;

        void setIdea(std::string idea);
        void printIdeas() const;
};

#endif
