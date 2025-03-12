#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <string>

class Zombie {
    private:
        std::string name;

    public:
        Zombie();
        announce(void);
};

// https://isocpp.org/wiki/faq/big-picture#why-use-oo
#endif