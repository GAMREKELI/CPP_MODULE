/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdursley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 21:14:33 by pdursley          #+#    #+#             */
/*   Updated: 2022/10/01 21:14:34 by pdursley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void )
{
    Fixed       a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "a * b = " << Fixed(a * b) << std::endl;
    std::cout << "++a = " << ++a << std::endl;
    std::cout << "a + b = " << Fixed(a + b) << std::endl;
    std::cout << "a - b = " << Fixed(a - b) << std::endl;
    std::cout << "a++ = " << a++ << std::endl;
    std::cout << "a / b = " << Fixed(a / b) << std::endl;
    std::cout << "a = " << a << std::endl;


    std::cout << "max = " << Fixed::max( a, b ) << std::endl;
    std::cout << "min = " << Fixed::min( a, b ) << std::endl;

    return(0);
}