#include "Fixed.hpp"


const int Fixed::frac = 8;

Fixed::Fixed() : number(0) {
    std::cout << "Default constructor called" << std::endl;
}
Fixed::Fixed(const Fixed &obj) {
    std::cout << "Copy constructor called" << std::endl;
    this->number = obj.number;
}

Fixed &Fixed::operator=(const Fixed &obj) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &obj) {
        this->number = obj.number;
    }
    return *this;
}

int Fixed::getRawBits() const {
    std::cout << "getRawBits member function called" << std::endl;
    return this->number;
}

void Fixed::setRawBits(int const raw) {
    this->number = raw;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}
