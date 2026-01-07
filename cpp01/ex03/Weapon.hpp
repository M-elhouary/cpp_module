#ifndef WEAPON_HPP
#define WEAPON_HPP


#include <iostream>

class Weapon{
    private:
        std::string type;
    public:
        Weapon();
        ~Weapon();
        void getType(std::string name);
        void setType(std::string name);

};



#endif
