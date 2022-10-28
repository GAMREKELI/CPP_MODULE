#include "iter.hpp"
#include <string>
#include <cstring>

void ft_lower(const std::string& str)
{
	int i = -1;
	char *string_low = new char [str.length() + 1];
	std::strcpy(string_low, str.c_str());
	while (str[++i])
		std::cout << (char)tolower(str[i]);
	std::cout << " ";
	delete [] string_low;
}

void ft_upper(const std::string& str)
{
	int i = -1;
	char *string_low = new char [str.length() + 1];
	std::strcpy(string_low, str.c_str());
	while (str[++i])
		std::cout << (char)toupper(str[i]);
	std::cout << " ";
	delete [] string_low;
}

int main()
{
	std::string strings[] = {"NeKeT", "Maru", "iVan", "dEnchIc", "kOstyAn"};
	std::cout << "Standart strings: " << std::endl;
	::iter(strings, 5, print_normal<std::string>);
    std::cout << std::endl << std::endl;
	std::cout << "upper: " << std::endl;
	::iter(strings, 5, ft_upper);
    std::cout << std::endl << std::endl;
	std::cout << "lower: " << std::endl;
	::iter(strings, 5, ft_lower);
    std::cout << std::endl << std::endl;

	float floats[] = {2.28, 1.337, 1.23};

	std::cout << "floats from mass - floats: " << std::endl;
	::iter(floats, 3, print_normal<float>);
}
