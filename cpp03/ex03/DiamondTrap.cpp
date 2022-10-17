#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("base_name"), ScavTrap(), FragTrap()
{
    _name = "base";
    std::cout << "Constructor DiamondTrap is called" << std::endl;
    this->FragTrap::Hit_points = 100;
    this->ScavTrap::Energy_points = 50;
    this->FragTrap::Attack_damage = 30;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_name"), ScavTrap(), FragTrap()
{
    _name = name;
    std::cout << "Constructor DiamondTrap for " << _name << " is called" << std::endl;
    this->FragTrap::Hit_points = 100;
    this->ScavTrap::Energy_points = 50;
    this->FragTrap::Attack_damage = 30;
}

DiamondTrap::DiamondTrap(const DiamondTrap& copy) : ClapTrap(copy), ScavTrap(), FragTrap()
{
	std::cout << "Constructor copy DiamondTrap for " << copy._name << " called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "Destructor DiamondTrap for " << this->_name << " called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& f)
{
	ClapTrap::operator=(f);
	ScavTrap();
	FragTrap();
	return *this;
}

void DiamondTrap::attack(std::string const & target)
{
	this->ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << "I'm DiamondTrap " << this->_name << " and my ClapTrap name is " << this->ClapTrap::Name << std::endl;
}