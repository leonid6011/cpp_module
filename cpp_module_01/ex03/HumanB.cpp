#include "HumanB.hpp"

HumanB::HumanB() {}

HumanB::HumanB(const std::string name) {
	this->weapon = NULL;
	this->name = name;	
}

HumanB::~HumanB() {
    std::cout << this->name << " died! " << std::endl;
}

void HumanB::setWeapon(Weapon& weapon) {
	this->weapon = &weapon;
}

void HumanB::attack() {
	
	if (!this->weapon)
		std::cout << this->name << " doesn't have a weapon " << std::endl;
	else
		std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}