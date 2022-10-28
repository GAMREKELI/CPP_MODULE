#include "easyfind.hpp"

int main()
{
    int i;
    std::cin >> i;

    std::list<int> List;

    List.push_back(1);
    List.push_back(2);
    List.push_back(4);
    List.push_back(8);
    List.push_back(16);
    List.push_back(32);

    try
    {
        easyfind(List, i);
    }
    catch (std::exception const &e)
    {
        std::cerr << e.what() << std::endl;
    }

    return (0);
}