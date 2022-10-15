#include "Fixed.hpp"
#include "Point.hpp"

int main()
{
	const Point a(1.f, 1.f);
	const Point b(4.f, 1.f);
	const Point c(2.5f, 3.f);
	const Point p1(DOT1COORD_X, DOT1COORD_Y);
	const Point p2(DOT2COORD_X, DOT2COORD_Y);

	// std::cout << "p1 is " << (bsp(a, b, c, p1) ? "in" : "not in") << " the triangle" << std::endl;
	// std::cout << "p2 is " << (bsp(a, b, c, p2) ? "in" : "not in") << " the triangle" << std::endl;

    if (bsp(a, b, c, p1))
        std::cout << "dot p1 in the triangle" << std::endl;
    else
        std::cout << "dot p1 not in the triangle" << std::endl;
    if (bsp(a, b, c, p2))
        std::cout << "dot p2 in the triangle" << std::endl;
    else
        std::cout << "dot p2 not in the triangle" << std::endl;
}