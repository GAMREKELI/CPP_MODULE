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

#include "header.hpp"

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cout << "Error" << std::endl;
        return (1);
    }
    std::string filename = argv[1];
    std::string tmp;
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    std::string line;
    std::ifstream fin(filename.data());
    if (fin.fail())
    {
        std::cout << "Error open file's!" << std::endl;
        return (1);
    }
    std::ofstream fout((filename + ".replace").data());
    while (std::getline(fin, line))
    {
        size_t t = line.find(s1);
        if (t != std::string::npos)
        {
            line.erase(t, s1.length());
            line.insert(t, s2);

        }
        fout << line;
        if (!fin.eof())
            fout << std::endl;
    }
    fin.close();
    fout.close();
    return (0);
}