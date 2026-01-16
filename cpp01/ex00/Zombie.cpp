#include "Zombie.hpp"

/*
** Constructor initializes the zombie's name.
*/
Zombie::Zombie(std::string name) : name(name) {}

/*
** Destructor prints a message when the zombie is destroyed.
** This helps track when objects go out of scope or are deleted.
*/
Zombie::~Zombie() {
    std::cout << this->name << ": has been destroyed" << std::endl;
}

/*
** announce writes a message to standard output.
*/
void Zombie::announce(void) {
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}