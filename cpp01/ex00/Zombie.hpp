#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

/*
** Zombie class represents a zombie with a name.
** It can announce itself.
** The destructor is public to allow deletion of dynamically allocated objects.
*/
class Zombie {
private:
    std::string name; 
public:
    Zombie(std::string name);
    ~Zombie();
    void announce(void); 
};

#endif