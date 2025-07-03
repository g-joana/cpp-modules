#ifndef CAT_HPP
# define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"
#include <string>
#include <iostream>

class Cat: public AAnimal {
    protected:
        std::string type;
        Brain *brain;
    public:
        Cat();
        Cat(const Cat& src);
        ~Cat();
        Cat& operator=(const Cat& src);
        void makeSound() const;

        void setIdea(std::string idea);
        void printIdeas() const;
};

#endif
