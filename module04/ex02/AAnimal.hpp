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
        // virtual = 0 (pure virtual)
        // a pure virtual function means it's null, this function does not have an implementation for this class, only its inherited classes (this is why it's virtual). meaning it's an abstract class
        virtual void makeSound() const = 0;
        // this function is declared but not implemented by this class, serving as an structure of what should be implemented by its childs
};

#endif
