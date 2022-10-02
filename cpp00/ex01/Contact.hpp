/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdursley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 21:30:33 by pdursley          #+#    #+#             */
/*   Updated: 2022/09/28 21:30:34 by pdursley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <iomanip>
#include <limits>
#include <string>

class   Contact
{
private:
    std::string index;
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;
public:
    Contact(void);
    Contact(std::string first_name, std::string last_name, \
            std::string nickname, std::string phone_number, std::string darkest_secret);
    void display(int flag, int i);
    void display_new(void);
    std::string ft_return_res(int flag);
};

#endif