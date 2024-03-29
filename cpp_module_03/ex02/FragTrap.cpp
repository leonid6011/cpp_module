#include "FragTrap.hpp"

FragTrap::FragTrap() {
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
	std::cout << "FragTrapp " << name << " constructor has been called" << std::endl;
}

FragTrap::FragTrap(const std::string nameInput) : ClapTrap("BASEClapTrap"){
	name = nameInput;
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
	std::cout << "FragTrap " << name << " constructor has been called" << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap " << name << " destructor has been called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap("BaseClapTrap") {
	*this = copy;
	std::cout << "FragTrap " << name << " copy constructor has been called" << std::endl;
}

FragTrap	&FragTrap::operator=(const FragTrap &copyObject) {
	if (this != &copyObject)
	{
		name = copyObject.name;
		hitPoints = copyObject.hitPoints;
		energyPoints = copyObject.energyPoints;
		attackDamage = copyObject.attackDamage;
		std::cout << "FragTrap " <<  name <<  " copy assignment operator has been called " << copyObject.name << std::endl;
		return (*this);
	}
	return (*this);
}

void FragTrap::highFivesGuys() {
	std::cout << "FragTrap high fives" << std::endl;
}