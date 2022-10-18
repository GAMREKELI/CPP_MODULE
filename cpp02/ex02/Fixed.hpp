/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdursley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 21:14:33 by pdursley          #+#    #+#             */
/*   Updated: 2022/10/01 21:14:34 by pdursley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
    // Fixed(const Fixed& f);
    Fixed(int const num);
    Fixed(float const num);

    ~Fixed(void);

    //Operator's

    Fixed& operator=(const Fixed& a);

    bool operator>(const Fixed& a);
    bool operator<(const Fixed& a);
    bool operator>=(const Fixed& a);
    bool operator<=(const Fixed& a);

    bool operator==(const Fixed& a);
    bool operator!=(const Fixed& a);

    Fixed   operator+(const Fixed& a);
    Fixed   operator-(const Fixed& a);
    Fixed   operator*(const Fixed& a);
    Fixed   operator/(const Fixed& a);

    Fixed&    operator++(void); //Prefix_Increment
    Fixed&    operator--(void); //Prefix_Decrement

    Fixed   operator++(int); //Postfix_Increment
    Fixed   operator--(int); //Postfix_Decrement
    

    float   toFloat(void) const;
    int     toInt(void) const;
    int     getRawBits(void) const;
    void    setRawBits(int const raw);

    static  const Fixed&  min(const Fixed& a, const Fixed& b);
    static  const Fixed&  max(const Fixed& a, const Fixed& b);

    static  Fixed&  min(Fixed& a, Fixed& b);
    static  Fixed&  max(Fixed& a, Fixed& b);
};

std::ostream& operator<<(std::ostream& flow, const Fixed& f);

#endif