/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdursley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 21:30:33 by pdursley          #+#    #+#             */
/*   Updated: 2022/09/28 21:30:34 by pdursley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

#define RISE 0
#define COLUMS 4
#define MAX 8

class PhoneBook
{
private:
    Contact contacts[8];
    int num;
    int cout;

public:
    PhoneBook();
    ~PhoneBook();

    void add();
    void search();
    void exit();
    void push();
    void init_cont();
    void index_user();
};

#endif