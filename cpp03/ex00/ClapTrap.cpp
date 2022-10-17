#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    Name = "base";
    Hit_points = HIT;
    Energy_points = ENERGY;
    Attack_damage = ATTACK;
    std::cout << "Constructor ClapTrap() called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
    Name = name;
    Hit_points = HIT;
    Energy_points = ENERGY;
    Attack_damage = ATTACK;
    std::cout << "Constructor ClapTrap(" << name << ") called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& update)
{
    Name = update.Name;
    Hit_points = update.Hit_points;
    Energy_points = update.Energy_points;
    Attack_damage = update.Attack_damage;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Distructor ClapTrap called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& f)
{
    this->Name = f.Name;
    this->Attack_damage = f.Attack_damage;
    this->Energy_points = f.Energy_points;
    this->Hit_points = f.Hit_points;
    return (*this);
}

void    ClapTrap::attack(const std::string& target)
{
    if (this->Hit_points <= 0)
        return ;
    std::cout << "ClapTrap " << this->Name;
    if (this->Energy_points > 0 && this->Hit_points > 0)
    {
        this->Energy_points -= 1;
        std::cout << " attacked " << target << ", causing " << this->Attack_damage << " points of damage!" << std::endl;
    }
    else if (this->Energy_points <= 0 && this->Hit_points > 0)
    {
        std::cout << " has too little energy points to attack." << std::endl;
    }
    else
        std::cout << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap " << this->Name;
    if (this->Hit_points == 0)
        std::cout << " DEAD!";
    else if (amount > this->Hit_points)
    {
        std::cout << " takes " << this->Hit_points << " damage and dies!" << std::endl;
		this->Hit_points = 0;
    }
    else
    {
        this->Hit_points -= amount;
        std::cout << " takes " << amount << " damage, " << this->Hit_points << " hp remaining!" << std::endl;
    }
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (this->Hit_points > 0)
    {
        this->Hit_points += amount;
        if (amount > this->Energy_points)
            this->Energy_points = 0;
        else
            this->Energy_points -= amount;
        std::cout << "ClapTrap " << this->Name << " is healed " << amount << " hit points, now has " << this->Hit_points << " hit points." << std::endl;
    }
}