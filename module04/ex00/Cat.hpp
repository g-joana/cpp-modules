#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat: public Animal {
    protected:
        std::string type;
    public:
        Cat();
        Cat(const Cat& src);
        Cat& operator=(const Cat& src);
        ~Cat();

        void makeSound() const;
};

#endif
