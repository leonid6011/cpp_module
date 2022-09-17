#include "Zombie.hpp"

Zombie *newZombie(std::string name)
{
	std::cout << name << "[on heap]" << std::endl;
	return (new Zombie(name));
}