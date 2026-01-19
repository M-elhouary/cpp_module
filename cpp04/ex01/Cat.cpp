#include "Cat.hpp"

// Default constructor
Cat::Cat()
{
    this->type = "Cat";
    this->brain = new Brain();
    std::cout << "Cat constructor called" << std::endl;
}

// Copy constructor
Cat::Cat(const Cat &other) : Animal(other)
{
    this->brain = new Brain(*other.brain);
    std::cout << "Cat copy constructor called" << std::endl;
}

// Assignment operator
Cat &Cat::operator=(const Cat &other)
{
    std::cout << "Cat assignment operator called" << std::endl;
    if (this != &other)
    {
        Animal::operator=(other); // Call base class assignment operator
        delete this->brain;
        this->brain = new Brain(*other.brain);
    }
    return *this;
}

// Destructor
Cat::~Cat()
{
    delete this->brain;
    std::cout << "Cat destructor called" << std::endl;
}
// makeSound method
void Cat::makeSound() const
{
    std::cout << " Meow Meow" << std::endl;
}
