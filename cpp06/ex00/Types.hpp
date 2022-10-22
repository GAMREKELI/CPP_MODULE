#ifndef TYPES_HPP
#define TYPES_HPP

#define INT
#define CHAR
#define FLOAT
#define DOUBLE

#include <iostream>
#include <cstdlib>
#include <limits>

class Types
{
	public:
		Types();

		~Types();

		void	printInt(int num);
		void	printChar(unsigned char c);
		void	printFloat(float f);
		void	printDouble(double d);

		int		setCode(void);

		std::string	toString(char *av);

		int getType(std::string input);

		void	setChar(char c);
		void	setInt(int i);
		void	setDouble(double d);
		void	setFloat(float f);

	private:
		std::string	arg;
		int			_typecode;
		int			_int;
		float		_float;
		double		_double;
		char		_char;
};

#endif

int	specSymb(std::string input);
