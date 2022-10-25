#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void)
{
    std::cout << "generated: ";
	    switch (rand() % 3)
	    {
	    case 0:
		    std::cout << "A" << std::endl;
		    return (new A());
	    case 1:
		    std::cout << "B" << std::endl;
		    return (new B());
	    case 2:
		    std::cout << "C" << std::endl;
		    return (new C());
	    default:
		    return (NULL);
	    }
}

void identify(Base* p)
{
    std::cout << "identify by pointer ---> ";
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
	else
		std::cerr << "bad cast" << std::endl;
}

void identify(Base& p)
{
    try
	{
		std::cout << "Identify by reference: ---> ";
		if (dynamic_cast<A*>(&p))
			std::cout << "A" << std::endl;
		else if (dynamic_cast<B*>(&p))
			std::cout << "B" << std::endl;
		else if (dynamic_cast<C*>(&p))
			std::cout << "C" << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

int main()
{
    srand(time(NULL));
    Base* ptr = generate();
    if (!ptr)
    {
        std::cout << "Error ptr!" << std::endl;
        return (1);
    }
    Base& ref = *ptr;
	identify(ptr);
	identify(ref);

	delete ptr;
    return (0);
}
