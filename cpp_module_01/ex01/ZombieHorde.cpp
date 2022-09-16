#include "Zombie.hpp"

Zombie* zombieHorde(int n, std::string name) {
	//Zombie *horde;

	// if (n < 1)
	// {
	// 	std::cout << "Error" << std::endl;
	// 	return (NULL);
	// }
	Zombie *horde = new Zombie[n];
	for(int i = 0; i < n; i++)
	{
		horde[i].setNameZombie(name); //выделяем n объектов класса зомби
	}
	return (horde);
}