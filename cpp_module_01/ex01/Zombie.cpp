#include "Zombie.hpp"

Zombie::Zombie() {}

Zombie::~Zombie() {
	
	std::cout << name << " is dead, again!" << std::endl;
}

void Zombie::setNameZombie(std::string new_name) {
	this->name = new_name;
}

std::string Zombie::getNameZombie(void) {
	return(name);
}

void Zombie::announcement(void) {
	
	std::cout << name  << ": BraiiiiiiinnnzzzZ..." << std::endl;
}