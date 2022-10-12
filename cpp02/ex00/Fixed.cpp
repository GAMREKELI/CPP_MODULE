#include "Fixed.hpp"

Fixed::Fixed(void)
{
    fixedP = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& f)
{
    fixedP = f.fixedP;
    std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void)
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->fixedP;
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->fixedP = raw;
}

Fixed& Fixed::operator=(const Fixed& a)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->fixedP = a.fixedP;
    return *this;
}