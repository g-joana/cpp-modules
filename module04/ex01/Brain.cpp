#include "Brain.hpp"

Brain::Brain(){
    std::cout << "Brain default constructor" << std::endl;
}

Brain::Brain(std::string idea){
    std::cout << "Brain constructor" << std::endl;
    this->ideas[0] = idea;
}

Brain::Brain(const Brain& src){
    std::cout << "Brain copy constructor" << std::endl;
    int i = 0;
    while (i < 100)
    {
        this->ideas[i] = src.ideas[i];
        i++;
    }
}

Brain::~Brain() {
    std::cout << "Brain destructor" << std::endl;
}

Brain& Brain::operator=(const Brain& src) {
    std::cout << "Brain copy assignment operator" << std::endl;
    int i = 0;
    while (i < 100)
    {
        this->ideas[i] = src.ideas[i];
        i++;
    }
    return *this;
}
