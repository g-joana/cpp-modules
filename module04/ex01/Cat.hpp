#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal {
    protected:
        std::string type;
        Brain *brain;
    public:
        Cat();
        Cat(const Cat& src);
        Cat& operator=(const Cat& src);
        ~Cat();

        void makeSound() const;
        void setIdea(std::string idea);
        void printIdeas() const;
};

#endif
