#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name);

/*
** Demonstrates allocation of multiple objects using helper function.
** Uses delete[] to free the memory, which is crucial for arrays allocated with new[].
*/
int main()
{
    int N = 6;
    Zombie* Horde = zombieHorde(N, "Zombie_Horde");
    for(int i = 0; i < N; i++)
    {
        Horde[i].announce();
    }
    delete[] Horde;
    return 0;
}