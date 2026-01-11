#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{

public:
    Fixed();
    Fixed(const Fixed &obj);
    Fixed &operator=(const Fixed &obj);
    int getRawBits() const;
    void setRawBits(int const raw);
    ~Fixed();

private:
    int number;
    static const int frac;
};

#endif // FIXED_HPP