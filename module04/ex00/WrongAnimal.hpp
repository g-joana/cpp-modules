#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <string>
#include <iostream>

class WrongAnimal {
    protected:
        std::string type;
    public:
        WrongAnimal();
        WrongAnimal(std::string type);
        WrongAnimal(WrongAnimal& src);
        WrongAnimal& operator=(WrongAnimal& src);
        virtual ~WrongAnimal();

        void setType(std::string type);
        const std::string& getType()const ;

        virtual void makeSound()const;
};

#endif
