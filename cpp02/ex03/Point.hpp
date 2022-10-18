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

#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>
#include "Fixed.hpp"

#define DOT1COORD_X 2.f
#define DOT1COORD_Y 2.f

#define DOT2COORD_X 4.f
#define DOT2COORD_Y 2.f

class Point
{
private:
    int x;
    int y;

public:
    Point();
    Point(float num1, float num2);
    Point(const Point& p);
    ~Point();
    Point& operator=(const Point& a);

    Fixed const get_x(void) const;
    Fixed const get_y(void) const;

};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif
