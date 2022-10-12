#include "Fixed.hpp"

Fixed::Fixed(void)
{
    fixedP = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const num)
{
    std::cout << "Int constructor called" << std::endl;
    this->fixedP = (num << numbit);
}

Fixed::Fixed(float const num)
{
    std::cout << "Float constructor called" << std::endl;
    this->fixedP = int(roundf(num * (1 << numbit)));
}

Fixed::Fixed(const Fixed& f)
{
    std::cout << "Copy constructor called" << std::endl;
    this->fixedP = f.getRawBits();
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}

float Fixed::toFloat(void) const
{
    return float(this->fixedP) / (1 << numbit);
}

int Fixed::toInt(void) const
{
    return this->fixedP >> numbit;
}

int     Fixed::getRawBits(void) const
{
    return (this->fixedP);
}

void    Fixed::setRawBits(int const raw)
{
    this->fixedP = raw;
}

Fixed& Fixed::operator=(const Fixed& a)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->fixedP = a.fixedP;
    return *this;
}

std::ostream& operator<<(std::ostream& flow, const Fixed& f)
{
    return (flow << f.toFloat());
}