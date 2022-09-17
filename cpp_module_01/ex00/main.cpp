#include "Zombie.hpp"

int main(void)
{
	Zombie *zombie_one = newZombie("Nikita");
	Zombie *zombie_two = newZombie("Leonid");
	
	zombie_one->announcement();
	zombie_two->announcement();
	randomChump("Andrey");

	delete zombie_one;
	delete zombie_two;
}