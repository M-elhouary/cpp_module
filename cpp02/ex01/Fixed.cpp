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

Fixed::Fixed(int value) {
    std::cout << "Int constructor called" <<  std::endl;
    this->number = value << frac;
}
Fixed::Fixed(float value) {
    std::cout << "Float constructor called" << std::endl;
    this->number = roundf(value * (1 << frac));
}
int Fixed::toInt() const {
    return this->number >> frac;
}
float Fixed::toFloat() const {
    return (float)(this->number) / (1 << frac);
}

std::ostream &operator<<(std::ostream &out, const Fixed &obj) {
    out << obj.toFloat();
    return out;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}



