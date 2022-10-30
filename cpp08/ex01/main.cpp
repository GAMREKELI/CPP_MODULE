#include "Span.hpp"

int main()
{
    int i = -1;

    std::cout << "Normal case: " << std::endl;
    try
    {
        Span a(5);

        a.addNumber(6);
        a.addNumber(3);
        a.addNumber(17);
        a.addNumber(9);
        a.addNumber(11);

        // Span a(10);

        // while (++i < 10)
        //     a.addNumber(i * i);


        std::cout << "Longest Span " << a.longestSpan() << std::endl;
        std::cout << "Shortest Span " << a.shortestSpan() << std::endl;
        i = -1;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << "Conteiner FULL: " << std::endl;
    try
    {
        Span a(10);
        while (++i < 11)
            a.addNumber(i * i);
    
        std::cout << "Longest Span " << a.longestSpan() << std::endl;
        std::cout << "Shortest Span " << a.shortestSpan() << std::endl;
        i = -1;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "Too Little argument conteiner: " << std::endl;
    try
    {
        Span a(10);
        while (++i < 2)
            a.addNumber(i * i);
    
        std::cout << "Longest Span " << a.longestSpan() << std::endl;
        std::cout << "Shortest Span " << a.shortestSpan() << std::endl;
        i = -1;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}