#include "Zombie.hpp"

Zombie::Zombie(){
    std::cout << "Zombie's constructor called!" << std::endl;
}

Zombie::Zombie(std::string name){
    Zombie_name = name;
}

Zombie::~Zombie(){
    std::cout << Zombie_name << " is gone!" << std::endl;
}

void Zombie::announce(void){
    std::cout  << Zombie_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}