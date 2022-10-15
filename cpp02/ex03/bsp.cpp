#include "Fixed.hpp"
#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    // (x1 - x0) * (y2 - y1) - (x2 - x1) * (y1 - y0)
    // (x2 - x0) * (y3 - y2) - (x3 - x2) * (y2 - y0)
    // (x3 - x0) * (y1 - y3) - (x1 - x3) * (y3 - y0)

     float check_one;
     float check_two;
     float check_three;

     check_one = (a.get_x().toFloat() - point.get_x().toFloat()) * (b.get_y().toFloat() - a.get_y().toFloat())\
         - (b.get_x().toFloat() - a.get_x().toFloat()) * (a.get_y().toFloat() - point.get_y().toFloat());

     check_two = (b.get_x().toFloat() - point.get_x().toFloat()) * (c.get_y().toFloat() - b.get_y().toFloat())\
         - (c.get_x().toFloat() - b.get_x().toFloat()) * (b.get_y().toFloat() - point.get_y().toFloat());

     check_three = (c.get_x().toFloat() - point.get_x().toFloat()) * (a.get_y().toFloat() - c.get_y().toFloat())\
         - (a.get_x().toFloat() - c.get_x().toFloat()) * (c.get_y().toFloat() - point.get_y().toFloat());
        
     // std::cout << "---" << check_one << "---" << std::endl;
     // std::cout << "---" << check_two << "---" << std::endl;
     // std::cout << "---" << check_three << "---" << std::endl;
     if (check_one >= 0 && check_two >= 0 && check_three >= 0)
          return (1);
     else
          return (0);

}