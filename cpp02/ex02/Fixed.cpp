/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdursley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 21:14:33 by pdursley          #+#    #+#             */
/*   Updated: 2022/10/01 21:14:34 by pdursley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    fixedP = 0;
}

Fixed::~Fixed()
{

}

Fixed::Fixed(const int num)
{
    this->fixedP = (num << numbit);
}

Fixed::Fixed(const float num)
{
    this->fixedP = int(roundf(num * (1 << numbit)));
}

void    Fixed::setRawBits(int const raw)
{
    this->fixedP = raw;
}

int Fixed::toInt(void) const
{
    return this->fixedP >> numbit;
}

float Fixed::toFloat(void) const
{
    return float(this->fixedP) / (1 << numbit);
}

//Equal-to and Not-equal-to:
bool Fixed::operator==(const Fixed& a)
{
    bool result;

    result = (this->fixedP == a.fixedP);
    return (result);
}

bool Fixed::operator!=(const Fixed& a)
{
    bool result;

    result = (this->fixedP != a.fixedP);
    return (result);
}

//Operator's:
Fixed& Fixed::operator=(const Fixed& a)
{
    this->fixedP = a.fixedP;
    return (*this);
}

Fixed  Fixed::operator*(const Fixed& a)
{
    Fixed   multip;

    multip.setRawBits(this->fixedP * a.fixedP >> numbit);
    return (multip);
}

Fixed   Fixed::operator/(const Fixed& a)
{
    Fixed   division;

    division.setRawBits((this->fixedP * (1 << numbit)) / a.fixedP);
    return (division);
}

Fixed   Fixed::operator+(const Fixed& a)
{
    Fixed   plus;

    plus.setRawBits(this->fixedP + a.fixedP);
    return (plus);
}

Fixed   Fixed::operator-(const Fixed& a)
{
    Fixed   minus;

    minus.setRawBits(this->fixedP - a.fixedP);
    return (minus);
}

Fixed&   Fixed::operator++(void)
{
    this->fixedP++;
    return (*this);
}

Fixed   Fixed::operator++(int)
{
    Fixed Increment;

    Increment = *this;
    ++*this;
    return (Increment);
}

Fixed&   Fixed::operator--(void)
{
    this->fixedP--;
    return (*this);
}

Fixed   Fixed::operator--(int)
{
    Fixed Decrement;

    Decrement = *this;
    --*this;
    return (*this);
}

bool Fixed::operator>(const Fixed& a)
{
    bool result;

    result = (fixedP > a.fixedP);
    return (result);
}

bool Fixed::operator<(const Fixed& a)
{
    bool result;

    result = (fixedP < a.fixedP);
    return (result);
}

bool Fixed::operator>=(const Fixed& a)
{
    bool result;

    result = (fixedP >= a.fixedP);
    return (result);
}

bool Fixed::operator<=(const Fixed& a)
{
    bool result;

    result = (fixedP <= a.fixedP);
    return (result);
}

const Fixed&  Fixed::min(const Fixed& a, const Fixed& b)
{
    if (a.fixedP < b.fixedP)
        return (a);
    else
        return (b);
}

const Fixed&  Fixed::max(const Fixed& a, const Fixed& b)
{
    if (a.fixedP > b.fixedP)
        return (a);
    else
        return (b);
}

Fixed&  Fixed::min(Fixed& a, Fixed& b)
{
    if (a < b)
        return (a);
    else
        return (b);
}

Fixed&  Fixed::max(Fixed& a, Fixed& b)
{
    if (a > b)
        return (a);
    else
        return (b);
}

std::ostream& operator<<(std::ostream& flow, const Fixed& f)
{
    return (flow << f.toFloat());
}