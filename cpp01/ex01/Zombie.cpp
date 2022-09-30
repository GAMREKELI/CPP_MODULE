#include "Zombie.hpp"

Zombie* newZombie(std::string name){
    return new Zombie(name);
}

Zombie::Zombie() {
	std::cout << "Norm!" << std::endl;
}

Zombie::Zombie(std::string name) {
	Zombie_name = name;
}

Zombie::~Zombie(){
    std::cout << Zombie_name << " delete!" << std::endl;
}

void Zombie::announce(void){
    std::cout  << Zombie_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}