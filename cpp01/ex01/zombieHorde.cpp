#include "Zombie.hpp"
#include <string>

/*
** Allocates N Zombie objects in a single memory block using new[].
** Initializes each Zombie with the given name.
** Returns a pointer to the first Zombie in the array.
*/
Zombie* zombieHorde( int N, std::string name)
{

    if(N <= 0)
        return NULL;
    Zombie *Horde = new Zombie[N];
    for(int i = 0; i < N; i++)
    {
        Horde[i].setName(name);
    }
    return Horde;
}