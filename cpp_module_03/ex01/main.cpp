#include "ScavTrap.hpp"

int main(void)
{
    ClapTrap Leonid("Leonid");
    ClapTrap lol;
    
    lol.attack("Leonid");
    Leonid.takeDamage(2);
    lol.attack("Leonid");
    Leonid.beRepaired(1);

    std::cout << "================================" << std::endl;

    ScavTrap LeonidNew("LeonidNew");
	ScavTrap AndrewNew("AndrewNew");

	LeonidNew.attack("AndrewNew");
	AndrewNew.takeDamage(20);
	AndrewNew.beRepaired(1);
	LeonidNew.guardGate();
	AndrewNew.guardGate();
}