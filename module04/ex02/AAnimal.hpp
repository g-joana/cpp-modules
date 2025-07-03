#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>
#include <iostream>

class AAnimal {
    protected:
        std::string type;
    public:
        AAnimal();
        AAnimal(std::string type);
        AAnimal(const AAnimal& src);
        AAnimal& operator=(const AAnimal& src);
        virtual ~AAnimal();

        void setType(std::string type);
        const std::string& getType()const ;

        virtual void makeSound() const = 0;
};

#endif
