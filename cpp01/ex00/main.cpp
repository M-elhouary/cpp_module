#include    "Zombie.hpp"




// Prototypes for the allocation functions
Zombie* newZombie(std::string name);
void    randomChump(std::string name);

int main() {
    // Stack: destroyed automatically when randomChump finishes
    randomChump("Stack_Zombie");

    // Heap: persistent until you manually delete it
    Zombie* heapZombie = newZombie("Heap_Zombie");
    heapZombie->announce();
    delete heapZombie; // This triggers the destructor! [cite: 137]

    return 0;
}