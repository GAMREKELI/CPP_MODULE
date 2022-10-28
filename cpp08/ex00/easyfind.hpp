#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <string>
#include <algorithm>
#include <stdexcept>
#include <list>

class NoMatchExc : public std::exception
{
    virtual const char * what() const throw()
    {
        return ("NO MATCH!");
    };
};

template <typename T>
void    easyfind(T& a, int num)
{
    typename T::iterator lol;
    lol = std::find(a.begin(), a.end(), num); //возвращает указатель!
    if (lol != a.end() && *lol == num)
        std::cout << "---" << *lol << "---" << std::endl;
    else
        throw NoMatchExc();
}

#endif

/* Итераторы обеспечивают доступ к элементам контейнера. 
С помощью итераторов очень удобно перебирать элементы. 
Итератор описывается типом iterator.
для каждого контейнера конкретный тип итератора будет отличаться. 
Так, итератор для контейнера list<int> представляет тип list<int>::iterator  */
