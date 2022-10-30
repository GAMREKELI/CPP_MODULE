#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template <typename T>
class MutantStack: public std::stack<T>
{
public:

    typedef typename std::stack<T>::container_type::iterator iterator;

    // iterator it;

    MutantStack<T>()
    {
        std::stack<T>();
    }

    MutantStack<T>(const MutantStack<T> &m) :std::stack<T>(m){}

    ~MutantStack<T>()
    {}

    MutantStack<T> &operator=(const MutantStack<T> &m)
    {
        if (this == &m)
            return (*this);
        this->c = m.c;
        return (*this);
    }

    iterator begin()
    {
        return (this->c.begin());
    };

    iterator end()
    {
        return (this->c.end());
    };

    //где this->c - является классов стандартного контейнера
};

#endif
