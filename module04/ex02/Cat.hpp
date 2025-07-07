#ifndef CAT_HPP
# define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat: public AAnimal {
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
