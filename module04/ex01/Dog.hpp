#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal {
    protected:
        std::string type;
        Brain *brain;
    public:
        Dog();
        Dog(const Dog& src);
        Dog& operator=(const Dog& src);
        ~Dog();

        void makeSound() const;
        void setIdea(std::string idea);
        void printIdeas() const;
};

#endif
