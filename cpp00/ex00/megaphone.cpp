/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdursley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 19:17:33 by pdursley          #+#    #+#             */
/*   Updated: 2022/09/27 19:17:33 by pdursley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void    ft_write_error(void){
    std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    return ;
}

void    ft_write(char **str){
    int i = 1;
    int j  = -1;

    while (str[i]){
        j = -1;
        while (str[i][++j]){
            std::cout << (char)toupper(str[i][j]);
        }
        if (str[i + 1])
            std::cout << " ";
        ++i;
    }
    return ;
}

int main(int argc, char **argv){
    if (argc < 2){
        ft_write_error();
        return (1);
    }
    ft_write(argv);
    return (0);
}
