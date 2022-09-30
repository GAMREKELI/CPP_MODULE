#include "Zombie.hpp"

int main(){
    int N = NUM;
    size_t i = N + 1;
    Zombie* Horde = zombieHorde(N, "Zomb");
    while (--i != 0){
        Horde->announce();
    }
    delete []Horde;
    return (0);
}