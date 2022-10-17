#include "ClapTrap.hpp"

int main()
{
	ClapTrap Neket("Neket");

	Neket.attack("BOSS_1");
	Neket.attack("BOSS_2");
	Neket.attack("BOSS_3");
	Neket.attack("BOSS_4");
	Neket.attack("BOSS_5");
	Neket.attack("BOSS_6");
	Neket.attack("BOSS_7");
	Neket.takeDamage(5);
	Neket.takeDamage(4);

	Neket.beRepaired(10);
	Neket.takeDamage(12);
	Neket.attack("BOSS_6");
	Neket.beRepaired(10);
}
