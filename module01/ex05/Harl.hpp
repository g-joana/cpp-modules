#ifndef HARL_HPP
# define HARL_HPP

#include <string>

class Harl {
    private:
        std::string levels[4];
        void (Harl::*methods[4])();
        void debug();
        void info();
        void warning();
        void error();
    public:
        Harl();
        void complain(std::string level);
        ~Harl();
};

#endif
