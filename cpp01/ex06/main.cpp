#include "Harl.hpp"

int main(int argc, char **argv)
{
    std::string line;
    Harl harl;
    int num = 0;
    if (argc == 1)
    {
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
        return (0);
    }
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    while (num < 4 && levels[num] != argv[1])
			num++;
    switch (num)
    {
        case 0:
            std::cout << "[ " << levels[0] << " ]" << std::endl;
            harl.complain(levels[0]);
            std::cout << std::endl;
            break;
        case 1:
            std::cout << "[ " << levels[1] << " ]" << std::endl;
            harl.complain(levels[1]);
            std::cout << std::endl;
            break;
        case 2:
            std::cout << "[ " << levels[2] << " ]" << std::endl;
            harl.complain(levels[2]);
            std::cout << std::endl;
            break;
        case 3:
            std::cout << "[ " << levels[3] << " ]" << std::endl;
            harl.complain(levels[3]);
            std::cout << std::endl;
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
    return (0);
}