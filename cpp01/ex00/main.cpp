#include "Zombie.hpp"

int main(){
    std::string name;

    getline(std::cin, name);
    Zombie zom_from_stack = (std::string (name));
    zom_from_stack.announce();

    getline(std::cin, name);
    Zombie* zom_from_heap = newZombie(name);
    zom_from_heap->announce();

    randomChump("LoL");
    delete zom_from_heap;
    
    return (0);
}
