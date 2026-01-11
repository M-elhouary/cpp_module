#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
public:
    Fixed();   // Default constructor
    Fixed(const int value); // parameterized constructor
    Fixed(const float value); // parameterized constructor
    Fixed(const Fixed &obj); // copy constructor
    ~Fixed(); // destructor

    Fixed &operator=(const Fixed &obj); // assignment operator

    bool operator>(const Fixed &obj) const; // comparison operators
    bool operator<(const Fixed &obj) const; // comparison operators
    bool operator>=(const Fixed &obj) const; // comparison operators
    bool operator<=(const Fixed &obj) const; // comparison operators
    bool operator==(const Fixed &obj) const; // comparison operators
    bool operator!=(const Fixed &obj) const; // comparison operators
    Fixed operator+(const Fixed &obj) const; // arithmetic operators
    Fixed operator-(const Fixed &obj) const; // arithmetic operators
    Fixed operator*(const Fixed &obj) const; // arithmetic operators
    Fixed operator/(const Fixed &obj) const; // arithmetic operators

    Fixed &operator++(); // increment operators
    Fixed operator++(int); // increment operators
    Fixed &operator--(); // decrement operators
    Fixed operator--(int); // decrement operators

    static Fixed &min(Fixed &a, Fixed &b); // min and max functions
    static const Fixed &min(const Fixed &a, const Fixed &b);
    static Fixed &max(Fixed &a, Fixed &b);
    static const Fixed &max(const Fixed &a, const Fixed &b);

    // Member functions
    int getRawBits(void) const; // getter
    void setRawBits(int const raw); // setter
    float toFloat(void) const; // conversion to float
    int toInt(void) const; // conversion to int

private:
    int _fixedPointValue; // fixed-point value
    static const int _fractionalBits = 8; // fractional bits
};

std::ostream &operator<<(std::ostream &out, const Fixed &obj); // insertion operator overload

#endif
