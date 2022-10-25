#include "whatever.hpp"

int main( void ) 
{
    int a = 2;
    int b = 3;

    ::swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    
    std::string c = "chaine1";
    std::string d = "chaine2";
    
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
    
    std::cout << "-------------My test-------------" << std::endl;

    double q = 228;
    double w = 1337;

    ::swap(q, w);
    std::cout << "q ---> " << q << std::endl;
    std::cout << "w ---> " << w << std::endl;

    std::cout << "min ---> " << min(q, w) << std::endl;
    ::swap(q, w);
    std::cout << "swap ---> " << " q --> " << q << std::endl;
    std::cout << "swap ---> " << " w --> " << w << std::endl;
    std::cout << "max ---> " << max(q, w) << std::endl;



    
    return 0;
}
