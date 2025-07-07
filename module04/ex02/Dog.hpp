#ifndef DOG_HPP
# define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog: public AAnimal {
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
