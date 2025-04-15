#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>
#include <iostream>

class Brain {
    private:
        std::string ideas[100];
    public:
        Brain();
        Brain(std::string type);
        Brain(Brain& src);
        Brain& operator=(Brain& src);
        virtual ~Brain();
};

#endif
