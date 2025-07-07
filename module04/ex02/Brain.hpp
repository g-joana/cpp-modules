#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>

class Brain {
    private:
        std::string ideas[100];
    public:
        Brain();
        Brain(const Brain& src);
        Brain& operator=(const Brain& src);
        virtual ~Brain();

        Brain(std::string type);
        void setIdea(std::string idea);
        void printIdeas() const;
};

#endif
