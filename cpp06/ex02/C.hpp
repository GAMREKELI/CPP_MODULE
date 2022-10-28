#include "Base.hpp"

class C : public Base
{
    public:
        C(){std::cout << "Default constructor C" << std::endl;}
        ~C(){std::cout << "Distructor C" << std::endl;}
};
