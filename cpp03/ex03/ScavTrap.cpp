#include "ScavTrap.hpp" 


ScavTrap::ScavTrap() : ClapTrap()
{
    std::cout << "Constructor ScavTrap(void) " << std::endl;
    this->Hit_points = 100;
    this->Energy_points = 50;
    this->Attack_damage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "Constructor ScavTrap " << this->Name << " called" << std::endl;
    this->Name = name;
    this->Hit_points = 100;
    this->Energy_points = 50;
    this->Attack_damage = 20;
    
}

ScavTrap::ScavTrap(const ScavTrap& copy) : ClapTrap(copy)
{
    std::cout << "Constructor copy ScavTrap for " << copy.Name << " called" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "Destructor ScavTrap for " << this->Name << " called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& f)
{
    ClapTrap::operator=(f);
    return (*this);
}

void    ScavTrap::attack(const std::string& target)
{
    if (this->Hit_points <= 0)
        return ;
    std::cout << "ScavTrap " << this->Name;
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

void    ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->Name << "  is now in Gate keeper mode!" << std::endl;
}