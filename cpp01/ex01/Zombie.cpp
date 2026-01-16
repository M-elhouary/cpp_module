#include "Zombie.hpp"

/*
** Default constructor required for array allocation (new[]).
*/
Zombie::Zombie(void) : name() {}

Zombie::~Zombie() {
    std::cout << this->name << " is destroyed" << std::endl;
}

void Zombie::announce(void) {
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl; 
}

/*
** Sets the name of the Zombie. Used after creation in zombieHorde.
*/
void Zombie::setName(std::string name) { 
    this->name = name;
}