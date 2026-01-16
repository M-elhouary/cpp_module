#include "Zombie.hpp"

/*
** Creates a new Zombie on the heap using 'new'.
** Returns a pointer to the created Zombie.
** The caller is responsible for deleting this object to prevent memory leaks.
*/
Zombie* newZombie(std::string name) {
    return new Zombie(name);
}