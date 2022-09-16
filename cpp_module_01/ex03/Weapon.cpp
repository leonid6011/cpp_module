#include "Weapon.hpp"

Weapon::Weapon() {}

Weapon::~Weapon() {}

Weapon::Weapon(const std::string weaponType)
{
	type = weaponType;
}

std::string &Weapon::getType()
{
	return (type);
}

void Weapon::setType(const std::string weaponType) 
{
	this->type = weaponType;
}