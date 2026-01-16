#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

/*
** Zombie class for ex01.
** Needs a default constructor because we will allocate an array of Zombies.
** setName() is used to initialize them after allocation.
*/
class Zombie {
   private:
    std::string name;
   public:
    Zombie();
    ~Zombie();
    void announce(void);
    void setName(std::string name);
};

#endif