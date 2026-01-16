#include "Dog.hpp"

// Default constructor
Dog::Dog()
{
    this->type = "Dog";
    this->brain = new Brain();
    std::cout << "Dog constructor called" << std::endl;
}

// Copy constructor
Dog::Dog(const Dog &other) : Animal(other)
{
    this->brain = new Brain(*other.brain);
    std::cout << "Dog copy constructor called" << std::endl;
}

// Assignment operator
Dog &Dog::operator=(const Dog &other)
{
    std::cout << "Dog assignment operator called" << std::endl;
    if (this != &other)
    {
        Animal::operator=(other);
        delete this->brain;
        this->brain = new Brain(*other.brain);
    }
    return *this;
}
// Destructor
Dog::~Dog()
{
    delete this->brain;
    std::cout << "Dog destructor called" << std::endl;
}
// makeSound method
void Dog::makeSound() const
{
    std::cout << "  How How " << std::endl;
}
