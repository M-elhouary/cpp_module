#ifndef FIXED_HPP
#define FIXED_HPP   
#include <iostream>
#include <cmath>    
class Fixed
{   

public:
    Fixed();
    Fixed(const Fixed &obj);
    Fixed(int value);
    Fixed(float value);
    Fixed &operator=(const Fixed &obj);
    int toInt() const;
    float toFloat() const;
    int getRawBits() const;
    void setRawBits(int const raw);
    ~Fixed();
private:
    int number;
    static const int frac;
};

std::ostream &operator<<(std::ostream &out, const Fixed &obj);

#endif // FIXED_HPP