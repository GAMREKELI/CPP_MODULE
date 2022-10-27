#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string>

template <typename T>
void  iter(T* mass, size_t length, void (*f)(const T&))
{
    for (size_t i = 0; i < length; i ++)
        (*f)(mass[i]);
}

template <typename T>
void print_normal(const T& a)
{
    std::cout << a << " ";
}

#endif
