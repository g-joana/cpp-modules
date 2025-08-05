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
        // a function is virtual when it has other implementations on its inherited classes
        virtual ~Animal();
        // a destructor is virtual so the parent class call its childs destructors too

        Animal(std::string type);
        void setType(std::string type);
        // a function is const when it doesnt change the obj that calls it
        const std::string& getType()const;
        // a virtual function means that, when this function is called by a child will look for the child's implementation
        virtual void makeSound()const;
};

#endif
