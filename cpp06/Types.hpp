#ifndef TYPES_HPP
#define TYPED_HPP

#define INT
#define CHAR
#define FLOAT
#define DOUBLE

#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <limits>

class Types
{
	public:
		Types();
		//Types(const std::string type);

		~Types();

		//int		toInt(std::string i);
		//float	toFloat(std::string f);
		//double	toDouble(std::string d);
		//char	toChar(std::string c);

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

//bool	isChar(std::string input);
