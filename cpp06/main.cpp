#include "Types.hpp"

int main(int argc, char **argv)
{
	Types a;
	
	if (argc != 2)
	{
		std::cout << "No valid argc" << std::endl;
		return (1);
	}
	std::string input = a.toString(argv[argc - 1]);
	int typeCode = a.setCode();
	std::cout << typeCode << std::endl;
	switch (typeCode)
	{
		case (1):
			std::cout << "Char: ";
			a.setChar(atoi(argv[argc - 1]));
			//std::cout << "Char: " ;

			break;
		case (2):
			std::cout << "Int: ";
			a.setInt(atoi(argv[argc - 1]));
			//std::cout << "Int: ";
			break;
		case (3):
			std::cout << "Float :";
			a.setFloat(atoi(argv[argc - 1]));
			//std::cout << "Float: ";
			break;
		case (4):
			std::cout << "Double: ";
			a.setDouble(atoi(argv[argc - 1]));
			//std::cout << "Double: ";
			break;
	}
	return (0);
}
