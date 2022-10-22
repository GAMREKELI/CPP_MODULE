#include "Types.hpp"

Types::Types()
{
	this->arg = "noup";
	this->_typecode = -1;
	this->_int = 0;
	this->_double = 0.0;
	this->_float = 0.0f;
	this->_char = 0;
}

Types::~Types()
{
}

std::string Types::toString(char *av)
{
	this->arg = av;
	return (this->arg);
}

bool	isChar(std::string input)
{
	if (input.length() == 1 && (input[0] > '9' || input[0] < '0'))
    {
        return (true);
    }
	return (false);
}

int Types::getType(std::string input)
{
	// 0 - error
	// 1 - char
	// 2 - int
	// 3 - float
	// 4 - double

	int	i = 0;
	int	dot = 0;
	int	powf = 0;
	int ff = 0;

	if (specSymb(input)){
        return (specSymb(input));
    }
	if (isChar(input) == true)
		return (1);
	if (input[i] == '-')
		++i;
	if (input[i] == '.' && input[i + 1] == 'f')
			return (0);
	while ((input[i] >= 48 && input[i] <= 57) || (input[i] == '.' && !dot) \
			|| (input[i] == 'e' && !powf) || (input[i] == 'f' && !ff))
	{
		switch(input[i])
		{
			case '.':
				++dot;
				if (powf)
					return (0);
				break ;
			case 'e':
				++powf;
				break ;
			case 'f':
				++ff;
				if (!dot)
					return (0);
				break ;
		}
		i ++;
		if (ff)
			break ;
	}
	if (!input[i])
	{
		if (dot)
		{
			if (ff)
				return (3);
			return (4);
		}
		return (2);
	}
	return (0);

}

void	Types::printInt(int num)
{
	if (num <= std::numeric_limits<int>::max() || num >= std::numeric_limits<int>::min())
		std::cout << num << std::endl;
	else
		std::cout << "impossible" << std::endl;
	return ;
}

void	Types::printChar(unsigned char c)
{
	if (!(c < 32 || c > 126))
		std::cout << c << std::endl;
	else
		std::cout << "Non displayed" << std::endl;
	return ;
}

void	Types::printFloat(float f)
{
	if (f - (int)f == (float)0)
		std::cout << f << ".0f" << std::endl;
	else
		std::cout << f << "f" << std::endl;
	return ;
}

void	Types::printDouble(double d)
{
	if (d - (int)d == (double)0)
		std::cout << d << ".0" << std::endl;
	else
		std::cout << d << std::endl;
	return ;
}

int	Types::setCode(void)
{
	this->_typecode = getType(this->arg);
	return (this->_typecode);
}

void	Types::setChar(char c)
{
	this->_char = c;
	Types::printChar(this->_char);
}

void	Types::setInt(int i)
{
	this->_int = i;
	Types::printInt(this->_int);
}

void	Types::setDouble(double d)
{
	this->_double = d;
	Types::printDouble(this->_double);
}

void	Types::setFloat(float f)
{
	this->_float = f;
	Types::printFloat(this->_float);
}

int	specSymb(std::string input)
{
	if (input == "+inff" || input == "-inff" || input == "nanf")
		return (3);
	if (input == "+inf" || input == "-inf" || input == "nan")
		return (4);
	return (0);
}
