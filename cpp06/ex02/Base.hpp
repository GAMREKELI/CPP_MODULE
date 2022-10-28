#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>
#include <stdlib.h>

class Base
{
    public:
        Base(){std::cout << "Default constructor Base" << std::endl;}
        virtual ~Base(){std::cout << "Distructor Base" << std::endl;}
};

#endif
