#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal {
    protected:
        std::string type;
    public:
        WrongCat();
        WrongCat(const WrongCat& src);
        WrongCat& operator=(const WrongCat& src);
        ~WrongCat();

        void makeSound() const;
};

#endif
