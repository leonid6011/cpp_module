#include "Zombie.hpp"

int main(void) {

	Zombie		*hordeZombie;
	std::string name;
	int			n;

	n = 0;
	std::cout << "Enter name for your horde of zombie: ";
	std::cin >> name;
	std::cout << "How many zombie you want? Enter the number: ";
	std::cin >> n;
	if (n <= 0)
	{
		std::cout << "Error! Wrong argument!" << std::endl;
		return (1);
	}
	hordeZombie = zombieHorde(n, name);
	std::cout << std::endl;
	
	for (int i = 0; i < n; i++)
	{
		hordeZombie[i].announcement();
	}
	
	std::cout << std::endl;

	delete []hordeZombie;
}