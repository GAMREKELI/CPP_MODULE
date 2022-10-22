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
    if (!typeCode)
    {
        
    }

    char    scalChar;
    int     scalInt;
    float   scalFloat;
    double  scalDouble;

	switch (typeCode)
	{
		case (1):
            scalChar = argv[argc - 1][0];
			std::cout << "Char: ";
			a.setChar(scalChar);
            std::cout << "Int: ";
            a.setInt(static_cast<int>(scalChar));
            std::cout << "Float :";
            a.setFloat(static_cast<float>(scalChar));
            std::cout << "Double: ";
            a.setDouble(static_cast<double>(scalChar));
			break;
		case (2):
            scalInt = atoi(argv[argc - 1]);
			std::cout << "Char: ";
			a.setChar(static_cast<unsigned char>(scalInt));
            std::cout << "Int: ";
            a.setInt((scalInt));
            std::cout << "Float :";
            a.setFloat(static_cast<float>(scalInt));
            std::cout << "Double: ";
            a.setDouble(static_cast<double>(scalInt));
			break;
		case (3):
            scalFloat = atof(argv[argc - 1]);
            if (specSymb(input))
            {
                std::cout << "char: impossible" << std::endl;
                std::cout << "int: impossible" << std::endl;
            }
            else
            {
                std::cout << "Char: ";
			    a.setChar(static_cast<unsigned char>(scalFloat));
                std::cout << "Int: ";
                a.setInt(static_cast<int>(scalFloat));
            }
            std::cout << "Float :";
            a.setFloat(scalFloat);
            std::cout << "Double: ";
            a.setDouble(static_cast<double>(scalFloat));
			break;
		case (4):
            scalDouble = strtod(argv[argc - 1], NULL);
            if (specSymb(input))
            {
                std::cout << "char: impossible" << std::endl;
                std::cout << "int: impossible" << std::endl;
            }
            else
            {
                std::cout << "Char: ";
			    a.setChar(static_cast<unsigned char>(scalDouble));
                std::cout << "Int: ";
                a.setInt(static_cast<int>(scalDouble));
            }
            std::cout << "Float :";
            a.setFloat(static_cast<float>(scalDouble));
            std::cout << "Double: ";
            a.setDouble(scalDouble);
			break;
	}
	return (0);
}
