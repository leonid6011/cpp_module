#include "Zombie.hpp"

int main(void)
{
	//экземпляр двух лбъектов зомби которые передают имя в функцию зомби
	Zombie *zombie_one = newZombie("Nikita");
	Zombie *zombie_two = newZombie("Leonid");
	
	//зомби объявляют о себе
	zombie_one->announcement();
	zombie_two->announcement();
	randomChump("Andrey");

	delete zombie_one;
	delete zombie_two;
}