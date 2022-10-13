#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap Leonid("Leonid");
    ClapTrap Lol;
    
    Lol.attack("Leonid");
    Leonid.takeDamage(2);
    Lol.attack("Leonid");
    Leonid.beRepaired(1);
}