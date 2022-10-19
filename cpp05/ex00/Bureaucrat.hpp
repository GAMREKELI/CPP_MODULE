/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdursley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 19:17:33 by pdursley          #+#    #+#             */
/*   Updated: 2022/09/27 19:17:33 by pdursley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class Bureaucrat
{
public:
	// Constructors
	Bureaucrat();
	Bureaucrat(std::string const name, unsigned int grade);
	Bureaucrat(const Bureaucrat& copy);

	// Assignment operator overload
	Bureaucrat& operator=(const Bureaucrat& b);

	// Destructor
	~Bureaucrat();

	// Getters
	std::string const getName() const;
	unsigned int getGrade() const;

	void incrementGrade();
	void decrementGrade();

	class GradeTooHighException : public std::exception
	{
	public:
		const char* what() const throw()
		{
			return ("Grade too high");
		}
	};

	class GradeTooLowException : public std::exception
	{
	public:
		const char* what() const throw()
		{
			return ("Grade too low");
		}
	};

private:

	std::string const	_name;
	unsigned int		_grade;
};

std::ostream& operator<<(std::ostream& out, const Bureaucrat& b);