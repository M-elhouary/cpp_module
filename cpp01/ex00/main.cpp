#include    "Zombie.hpp"

Zombie* newZombie(std::string name);
void    randomChump(std::string name);

/*
** Main function demonstrates the difference between stack and heap allocation.
** - Stack_Zombie is created by randomChump and destroyed immediately after (stack).
** - Heap_Zombie is created by newZombie and persists until explicitly deleted (heap).
*/
int main() {

    randomChump("Stack_Zombie");
    Zombie* heapZombie = newZombie("Heap_Zombie");
    heapZombie->announce();
    delete heapZombie;

    return 0;
}