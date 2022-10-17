#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    std::cout << "Constructor FragTrap(void) called" << std::endl;
    this->Hit_points = 100;
    this->Energy_points = 100;
    this->Attack_damage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "Constructor FragTrap "<< name << " called" << std::endl;
    this->Hit_points = 100;
    this->Energy_points = 100;
    this->Attack_damage = 30;
}

FragTrap::~FragTrap()
{
    std::cout << "Destructor FragTrap for " << this->Name << " called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& copy) : ClapTrap(copy)
{
    std::cout << "Constructor copy FragTrap for " << copy.Name << " called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& f)
{
	ClapTrap::operator=(f);
	return *this;
}

void    FragTrap::attack(const std::string& target)
{
    if (this->Hit_points <= 0)
        return ;
    std::cout << "FragTrap " << this->Name;
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

void    FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << this->Name << " would like to high five everyone!" << std::endl;
}