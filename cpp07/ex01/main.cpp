#include "iter.hpp"

void ft_lower(const std::string& str)
{
	for (std::string::const_iterator itr = str.begin(); itr != str.end(); itr++)
		std::cout << (char)tolower(*itr);
	std::cout << " ";
}

void ft_upper(const std::string& str)
{
	for (std::string::const_iterator itr = str.begin(); itr != str.end(); itr++)
		std::cout << (char)toupper(*itr);
	std::cout << " ";
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
