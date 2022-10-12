#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cstring>

#define BITE 8

class Fixed
{
private:
    int                 fixedP;
    static int const    integerP = BITE; 
public:
    Fixed(void);
    Fixed(const Fixed& f);

    ~Fixed(void);

    Fixed& operator=(const Fixed& a);

    int getRawBits(void); //getter;

    void setRawBits(int const raw); //setter;
};

#endif