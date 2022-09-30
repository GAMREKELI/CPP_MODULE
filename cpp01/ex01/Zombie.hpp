#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>
#define NUM 5

class Zombie{
private:
     std::string Zombie_name;
public:
    Zombie(std::string name);
    Zombie();
    ~Zombie();
    void    announce( void );
    void setName(std::string name);
};

Zombie* zombieHorde( int N, std::string name );
Zombie* newZombie(std::string name);
#endif