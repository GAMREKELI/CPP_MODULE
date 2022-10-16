#include "Fixed.hpp"
#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
     float check_one;
     float check_two;
     float check_three;

     check_one = (a.get_x().toFloat() - point.get_x().toFloat()) * (b.get_y().toFloat() - a.get_y().toFloat())\
         - (b.get_x().toFloat() - a.get_x().toFloat()) * (a.get_y().toFloat() - point.get_y().toFloat());

     check_two = (b.get_x().toFloat() - point.get_x().toFloat()) * (c.get_y().toFloat() - b.get_y().toFloat())\
         - (c.get_x().toFloat() - b.get_x().toFloat()) * (b.get_y().toFloat() - point.get_y().toFloat());

     check_three = (c.get_x().toFloat() - point.get_x().toFloat()) * (a.get_y().toFloat() - c.get_y().toFloat())\
         - (a.get_x().toFloat() - c.get_x().toFloat()) * (c.get_y().toFloat() - point.get_y().toFloat());
        
     if (check_one >= 0 && check_two >= 0 && check_three >= 0)
          return (1);
     else
          return (0);

}
