#ifndef WEAPON_H
# define WEAPON_H
#include <string>

class Weapon {
    private:
        std::string type;
    public:
        Weapon();
        Weapon(std::string type);
        void setType(std::string t);
        std::string& getType();
        // ~Weapon();

};
#endif
