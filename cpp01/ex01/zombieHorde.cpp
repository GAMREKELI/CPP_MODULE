#include "Zombie.hpp"

void Zombie::setName(std::string name){
    Zombie_name = name;
}

Zombie* zombieHorde( int N, std::string name ){
    size_t i = -1;
    std::string line_name;

    if (N <= 0)
        return NULL;
    Zombie* Horde = new Zombie[N];
    while (++i < N){
        line_name = name + " " + std::to_string(i + 1);
        Horde[i].setName(line_name);
    }
    return (Horde);
}
