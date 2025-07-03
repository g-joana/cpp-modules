#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal {
    protected:
        std::string type;
    public:
        Animal();
        Animal(std::string type);
        Animal(const Animal& src);
        Animal& operator=(const Animal& src);
        virtual ~Animal();

        //??
        void setType(std::string type);
        const std::string& getType()const ;

        virtual void makeSound()const;
};

#endif
