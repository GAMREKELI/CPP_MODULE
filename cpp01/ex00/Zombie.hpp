#include <iostream>
#include <cstring>

class Zombie{
private:
    std::string Zombie_name;
public:
    Zombie(std::string name);
    Zombie();
    ~Zombie();
    void announce(void);
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);