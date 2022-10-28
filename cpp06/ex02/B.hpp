#include "Base.hpp"

class B : public Base
{
    public:
        B(){std::cout << "Default constructor B" << std::endl;}
        ~B(){std::cout << "Distructor B" << std::endl;}
};
