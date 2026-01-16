#include "Zombie.hpp"

/*
** Creates a Zombie on the stack.
** The object 'chump' will be automatically destroyed when this function returns.
** This demonstrates stack allocation and automatic storage duration.
*/
void randomChump(std::string name) {
    Zombie chump(name);
    chump.announce();
}