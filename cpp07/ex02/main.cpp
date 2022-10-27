#include "Array.hpp"
#include <stdlib.h>


int main()
{
	srand(time(NULL));

	const int count = 5;

	Array<int> a(count);
	for (unsigned int i = 0; i < a.size(); i++)
		a[i] = rand() % 200 + 1;

	Array<std::string> c(count);
	c[0] = "Neket";
	c[1] = "Mary";
	c[2] = "Ivan";
	c[3] = "Kost";
	c[4] = "Georg";

	Array<int> b(a);
	Array<std::string> d(c);

	std::cout << "before: " << std::endl << "a\tb\tc\td" << std::endl << std::endl;
	for (unsigned int i = 0; i < b.size(); i++)
		std::cout << a[i] << "\t" << b[i] << "\t" << c[i] << "\t" << d[i] << std::endl;

	for (unsigned int i = 0; i < a.size(); i++)
		a[i] = a[i] * 2;

	for (unsigned int i = 0; i < c.size(); i++)
		c[i] = c[i].append("<-").data();

	std::cout << "after: " << std::endl << "a\tb\tc\td" << std::endl << std::endl;
	for (unsigned int i = 0; i < b.size(); i++)
		std::cout << a[i] << "\t" << b[i] << "\t" << c[i] << "\t" << d[i] << std::endl;
	std::cout << std::endl;

	Array<int> e;

	try
	{
		std::cout << e[0] << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}
