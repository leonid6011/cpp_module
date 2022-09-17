#include "Zombie.hpp"

Zombie::Zombie(std::string new_name) {
	this->name = new_name;
}

Zombie::~Zombie() {
	std::cout << name << " is dead, again!" << std::endl;
}

void Zombie::announcement( void ) {
	std::cout << name  << ": BraiiiiiiinnnzzzZ..." << std::endl;
}