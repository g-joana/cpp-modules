#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>

class Animal {
    protected:
        std::string type;
    public:
        Animal();
        Animal(const Animal& src);
        Animal& operator=(const Animal& src);
        virtual ~Animal();

        Animal(std::string type);
        void setType(std::string type);
        const std::string& getType()const ;
        virtual void makeSound()const;
};

#endif
