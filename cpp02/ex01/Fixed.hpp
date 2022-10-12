#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

#define BITE 8

class Fixed
{
private:
    int                 fixedP;
    static const int    numbit = BITE;
public:
    Fixed(void);
    Fixed(const Fixed& f);
    Fixed(int const num);
    Fixed(float const num);

    ~Fixed(void);

    Fixed& operator=(const Fixed& a);

    // Fixed& operator<<();

    float   toFloat(void) const;
    int     toInt(void) const;
    int     getRawBits(void) const;
    void    setRawBits(int const raw);
};

std::ostream& operator<<(std::ostream& flow, const Fixed& f);

#endif