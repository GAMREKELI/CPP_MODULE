/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdursley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 21:14:33 by pdursley          #+#    #+#             */
/*   Updated: 2022/10/01 21:14:34 by pdursley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    int N = NUM;
    size_t i = N + 1;
    Zombie* Horde = zombieHorde(N, "Zomb");
    while (--i != 0){
        Horde->announce();
    }
    delete []Horde;
    return (0);
}