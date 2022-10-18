/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdursley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 21:14:33 by pdursley          #+#    #+#             */
/*   Updated: 2022/10/01 21:14:34 by pdursley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point()
{
    x = 0;
    y = 0;
}

Point::Point(float num1, float num2)
{
    x = num1;
    y = num2;
}

Point::Point(const Point& p)
{
    x = p.x;
    y = p.y;
}

Point::~Point()
{

}

Fixed const Point::get_x(void) const
{
    return (this->x);
}

Fixed const Point::get_y(void) const
{
    return (this->y);
}

Point& Point::operator=(const Point& a)
{
    (void)a;
    return (*this);
}
