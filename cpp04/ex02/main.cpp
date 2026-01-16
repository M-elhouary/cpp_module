#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
    // Animal test
    // const Animal* meta = new Animal(); // This line should cause a compilation error
    // meta->makeSound();
    // delete meta;

    const Animal *j = new Dog();
    const Animal *i = new Cat();

    delete j; // should not create a leak
    delete i;

    std::cout << "-------------------------------------------------------" << std::endl;

    // Create array of Animals
    const int count = 4;
    Animal *animals[count];

    for (int k = 0; k < count / 2; ++k)
        animals[k] = new Dog();
    for (int k = count / 2; k < count; ++k)
        animals[k] = new Cat();

    std::cout << "-------------------------------------------------------" << std::endl;

    // Delete all animals
    for (int k = 0; k < count; ++k)
        delete animals[k];

    std::cout << "-------------------------------------------------------" << std::endl;

    // Deep copy test
    Dog basic;
    {
        Dog tmp = basic;
    }

    return 0;
}
