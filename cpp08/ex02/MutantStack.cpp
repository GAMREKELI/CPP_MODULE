#include "MutantStack.hpp"

MutantStack<T>::MutantStack<T>()
    {
        std::stack<T>();
    }

    MutantStack<T>(const MutantStack<T> &m)
    {
        std::stack<T>(m);
    }

    ~MutantStack<T>()
    {}

    MutantStack<T> &operator=(const MutantStack<T> &m)
    {
        if (this == &m)
            return (*this);
        this->copy = m.copy;
        return (*this);
    }