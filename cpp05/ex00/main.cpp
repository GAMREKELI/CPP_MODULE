/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                      		                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdursley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 19:17:33 by pdursley          #+#    #+#             */
/*   Updated: 2022/09/27 19:17:33 by pdursley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat john("John", 2);
	Bureaucrat jim("Jim", 149);

	try
	{
		std::cout << john << std::endl;
		std::cout << jim << std::endl;
		john.decrementGrade();
		jim.incrementGrade();
		std::cout << john << std::endl;
		std::cout << jim << std::endl;
		john.decrementGrade();
		std::cout << john << std::endl;
		std::cout << jim << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}