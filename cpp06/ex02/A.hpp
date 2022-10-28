#include "Base.hpp"

class A : public Base
{
    public:
        A(){ std::cout << "Default constructor A" << std::endl;}
        ~A(){std::cout << "Distructor A" << std::endl;}
};
