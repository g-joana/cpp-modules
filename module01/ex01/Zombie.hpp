#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <string>
#include <iostream>
#include <cstdlib>

class Zombie {
    private:
        std::string name;

    public:
        Zombie();
        Zombie(std::string n);
        ~Zombie();
        void announce(void);
        void setName(std::string name);
};

Zombie* zombieHorde( int N, std::string name );


// https://isocpp.org/wiki/faq/big-picture#why-use-oo
#endif
