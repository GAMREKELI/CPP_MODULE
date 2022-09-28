/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdursley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 21:30:33 by pdursley          #+#    #+#             */
/*   Updated: 2022/09/28 21:30:34 by pdursley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Contact.hpp"

Contact::Contact(){
    return ;
}

Contact::Contact(std::string f_name, std::string l_name, \
            std::string nickn, std::string p_number, std::string secret)
{
    first_name = f_name;
    last_name = l_name;
    nickname = nickn;
    phone_number = p_number;
    darkest_secret = secret;
}

void Contact::display_new(){
    std::cout << "First name---> " << first_name << std::endl;
    std::cout << "Last name---> " << last_name << std::endl;
    std::cout << "Nickname---> " << nickname << std::endl;
    std::cout << "Phone namber---> " << phone_number << std::endl;
    std::cout << "Darkest secret---> " << darkest_secret << std::endl;
}

std::string Contact::ft_return_res(int flag){
    std::string f_name;
    std::string l_name;
    std::string n_name;

    if (flag == 3){
        f_name = first_name;
        if (f_name.length() > 10){
            f_name = f_name.substr(0,9);
            f_name.append(".");
        }
        return (f_name);
    }
     if (flag == 2){
        l_name = last_name;
        if (l_name.length() > 10){
            l_name = l_name.substr(0,9);
            l_name.append(".");
        }
        return (l_name);
    }
     if (flag == 1){
        n_name = nickname;
        if (n_name.length() > 10){
            n_name = n_name.substr(0,9);
            n_name.append(".");
        }    
        return (n_name);
    }
    return (NULL);
}

void Contact::display(int flag, int i){
    if (flag == 0){
        std::cout << "---------------------------------------------" << std::endl;
        std::cout << "|" << std::setw(10) << std::right << "Index";
        std::cout << "|" << std::setw(10) << std::right << "First name";
        std::cout << "|" << std::setw(10) << std::right << "Last name";
        std::cout << "|" << std::setw(10) << std::right << "Nickname";
        std::cout << "|" << std::endl;
        std::cout << "---------------------------------------------" << std::endl;
    }
    if (flag == 4)
        std::cout << "|" << std::setw(10) << std::right << i;
    if (flag == 3)
        std::cout << "|" << std::setw(10) << std::right << Contact::ft_return_res(3);
    if (flag == 2)
        std::cout << "|" << std::setw(10) << std::right << Contact::ft_return_res(2);
    if (flag == 1)
        std::cout << "|" << std::setw(10) << std::right << Contact::ft_return_res(1);
    if (flag == 228){
        std::cout << " The phone book is empty!" << std::endl;
        std::cout << " Use ADD to add a contact." << std::endl;
    }
}