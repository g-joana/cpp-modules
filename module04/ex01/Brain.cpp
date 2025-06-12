#include "Brain.hpp"

Brain::Brain(){
    std::cout << "Brain default constructor" << std::endl;
}

Brain::Brain(std::string idea){
    std::cout << "Brain constructor" << std::endl;
    this->ideas[0] = idea;
}

Brain::Brain(Brain& src){
    std::cout << "Brain copy constructor" << std::endl;
    *this = src;
}

Brain::~Brain() {
    std::cout << "Brain destructor" << std::endl;
}

Brain& Brain::operator=(Brain& src) {
    std::cout << "Brain copy assignment operator" << std::endl;
    *this = src;
    return src;
}
