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
        Brain(const Brain& src);
        Brain& operator=(const Brain& src);
        virtual ~Brain();
};

#endif
