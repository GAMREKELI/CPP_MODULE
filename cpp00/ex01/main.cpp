/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdursley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 21:30:33 by pdursley          #+#    #+#             */
/*   Updated: 2022/09/28 21:30:34 by pdursley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "PhoneBook.hpp"
#include "Contact.hpp"

int ft_check(std::string line)
{
    if (line == "ADD")
        return (1);
    if (line == "SEARCH")
        return (2);
    return (0);
}

int main(void)
{
    std::string line;
    PhoneBook objbook;
    int check = 0;

    std::cout << " Command's fot programm:" << std::endl;
    std::cout << "--> ADD (for add contact in Phonebook)" << std::endl;
    std::cout << "--> Search (for search contact)" << std::endl;
    std::cout << "--> EXIT (for exit from programm)" << std::endl << std::endl;
    while (1)
    {
        getline(std::cin, line);
        check = ft_check(line);
        if (check == 1)
            objbook.add();
        if (check == 2)
            objbook.search();
        if (line == "EXIT")
            break ;
    }
    return (0);
}