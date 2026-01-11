#include "Fixed.hpp"

// Default constructor
Fixed::Fixed() : _fixedPointValue(0) {
}

// Parameterized constructor (int)
Fixed::Fixed(const int value) {
    this->_fixedPointValue = value << _fractionalBits;
}

// Parameterized constructor (float)
Fixed::Fixed(const float value) {
    this->_fixedPointValue = roundf(value * (1 << _fractionalBits));
}
// Copy constructor
Fixed::Fixed(const Fixed &obj) {
    *this = obj;
}

Fixed::~Fixed() {
}


// Assignment operator

Fixed &Fixed::operator=(const Fixed &obj) {
    if (this != &obj) {
        this->_fixedPointValue = obj.getRawBits();
    }
    return *this;
}

bool Fixed::operator>(const Fixed &obj) const {
    return this->_fixedPointValue > obj._fixedPointValue;
}

bool Fixed::operator<(const Fixed &obj) const {
    return this->_fixedPointValue < obj._fixedPointValue;
}

bool Fixed::operator>=(const Fixed &obj) const {
    return this->_fixedPointValue >= obj._fixedPointValue;
}

bool Fixed::operator<=(const Fixed &obj) const {
    return this->_fixedPointValue <= obj._fixedPointValue;
}

bool Fixed::operator==(const Fixed &obj) const {
    return this->_fixedPointValue == obj._fixedPointValue;
}

bool Fixed::operator!=(const Fixed &obj) const {
    return this->_fixedPointValue != obj._fixedPointValue;
}

Fixed Fixed::operator+(const Fixed &obj) const {
    Fixed result;
    result.setRawBits(this->_fixedPointValue + obj._fixedPointValue);
    return result;
}

Fixed Fixed::operator-(const Fixed &obj) const {
    Fixed result;
    result.setRawBits(this->_fixedPointValue - obj._fixedPointValue);
    return result;
}

Fixed Fixed::operator*(const Fixed &obj) const {
    Fixed result;
    result.setRawBits((this->_fixedPointValue * (long long)obj._fixedPointValue) >> _fractionalBits);
    return result;
}

Fixed Fixed::operator/(const Fixed &obj) const {
    Fixed result;
    result.setRawBits(((long long)this->_fixedPointValue << _fractionalBits) / obj._fixedPointValue);
    return result;
}

Fixed &Fixed::operator++() {
    this->_fixedPointValue++;
    return *this;
}

Fixed Fixed::operator++(int) {
    Fixed temp = *this;
    this->_fixedPointValue++;
    return temp;
}

Fixed &Fixed::operator--() {
    this->_fixedPointValue--;
    return *this;
}

Fixed Fixed::operator--(int) {
    Fixed temp = *this;
    this->_fixedPointValue--;
    return temp;
}

Fixed &Fixed::min(Fixed &a, Fixed &b) {
    return (a < b) ? a : b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b) {
    return (a < b) ? a : b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b) {
    return (a > b) ? a : b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b) {
    return (a > b) ? a : b;
}

int Fixed::getRawBits(void) const {
    return this->_fixedPointValue;
}

void Fixed::setRawBits(int const raw) {
    this->_fixedPointValue = raw;
}

float Fixed::toFloat(void) const {
    return (float)this->_fixedPointValue / (1 << _fractionalBits);
}

int Fixed::toInt(void) const {
    return this->_fixedPointValue >> _fractionalBits;
}

std::ostream &operator<<(std::ostream &out, const Fixed &obj) {
    out << obj.toFloat();
    return out;
}
