#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#define ATTACK  0
#define ENERGY  10
#define HIT     10
#include <iostream>

class ClapTrap
{
protected:
    std::string     Name;
    unsigned int    Hit_points;
    unsigned int    Energy_points;
    unsigned int    Attack_damage;

public:
    ClapTrap();
    ClapTrap(std::string name);
    ClapTrap(const ClapTrap& update);
    ~ClapTrap();

    ClapTrap& operator=(const ClapTrap& f);

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif 
