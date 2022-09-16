#include "Zombie.hpp"

// создаем объект класса зомби
void randomChump(std::string name) {

	// этот объект находится в стеке и будет уничтожен в конце области видимости
	Zombie zombie(name);
	std::cout << name << "[on stack]" << std::endl;
	zombie.announcement();
}