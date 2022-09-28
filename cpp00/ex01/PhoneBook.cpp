/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdursley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 21:30:33 by pdursley          #+#    #+#             */
/*   Updated: 2022/09/28 21:30:34 by pdursley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    num = 0;
}

PhoneBook::~PhoneBook()
{
	return ;
}

void    PhoneBook::init_cont(){
    if (num == MAX)
		--num;
    for (int i = num; i > 0 ; --i)
		contacts[i] = contacts[i - 1];
	++num;
}

void PhoneBook::index_user(){
    int index = 0;
    std::string line;

    while (!(std::cin >> index) || index <= 0){
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Repeat pls" << std::endl;
    }
    if ((num - index) < 0 || index < 0){
        std::cout << "Error!" << std::endl;
        return ;
    }
    contacts[num - index].display_new();
    return ;
}

void PhoneBook::add(){
    std::string in;
    std::string f_name;
	std::string l_name;
	std::string nickname;
	std::string phone;
	std::string secret;

    std::cout << "Please enter youre first name: ";
    std::getline(std::cin, f_name);
    std::cout << "Please enter youre last name: ";
    std::getline(std::cin, l_name);
    std::cout << "Please enter youre nickname: ";
    std::getline(std::cin, nickname);
    std::cout << "Please enter youre number phone: ";
    std::getline(std::cin, phone);
    std::cout << "Please enter youre secret: ";
    std::getline(std::cin, secret);
    PhoneBook::init_cont();
    contacts[RISE] = Contact(f_name, l_name, nickname, phone, secret);
}

void PhoneBook::search(){
    int j;
    int i = 0;
    int kol = 1;

    if (num == 0){
        contacts[0].display(228, kol);
        return ;
    }
    contacts[0].display(0, kol);
    i = num;
    while (--i >= 0){
        j = COLUMS + 1;
        while (--j != 0){
            contacts[i].display(j, kol);
        }
        ++kol;
        std::cout << "|" << std::endl;
    }
    std::cout << "---------------------------------------------" << std::endl;
    PhoneBook::index_user();
}