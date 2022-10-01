/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HunabB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdursley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 21:14:33 by pdursley          #+#    #+#             */
/*   Updated: 2022/10/01 21:14:34 by pdursley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name)
{
    name_Human = name;
}

HumanB::~HumanB()
{

}

void HumanB::setWeapon(Weapon& weap)
{
    weapon = &weap;
}

void HumanB::attack()
{
    std::cout << name_Human << " attacks with his "; // << std::endl;
    if (weapon)
        std::cout << weapon->getType() << std::endl;
    else
        std::cout << "bare fists" << std::endl;
    
}
