#include "Weapon.hpp"

Weapon::Weapon(std::string type) : type(type) {} // Constructor to initialize the weapon type

// Getter for the weapon type
const std::string& Weapon::getType() const {
    return this->type;
}

// Setter to change the weapon type
void Weapon::setType(std::string newType) {
    this->type = newType;
}