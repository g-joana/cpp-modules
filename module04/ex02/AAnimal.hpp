#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>

class AAnimal {
    protected:
        std::string type;
    public:
        AAnimal();
        AAnimal(const AAnimal& src);
        AAnimal& operator=(const AAnimal& src);
        virtual ~AAnimal();

        AAnimal(std::string type);
        void setType(std::string type);
        const std::string& getType()const ;
        virtual void makeSound() const = 0;
};

#endif
