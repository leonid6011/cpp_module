#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
	this->name = "default_name";
	hitPoints = 10;
	energyPoints = 10;
	attackDamage = 0;
	std::cout << name << " constructor has been called" << std::endl;
}

ClapTrap::ClapTrap(conststd::string nameInput) {
	this->name = nameInput;
	hitPoints = 10;
	energyPoints = 10;
	attackDamage = 0;
	std::cout << name << " constructor has been called" << std::endl;
}


ClapTrap::~ClapTrap() {
	std::cout << name << " destructor has been called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy) {
	*this = copy;
	std::cout << name << " copy constructor has been called" << std::endl;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &copyObject) {
	if (this != &copyObject)
	{
		this->name = copyObject.name;
		this->hitPoints = copyObject.hitPoints;
		this->energyPoints = copyObject.energyPoints;
		this->attackDamage = copyObject.attackDamage;
		std::cout << this->name <<  " copy assignment operator has been called " << copyObject.name << std::endl;
		return (*this);
	}
	return (*this);
}

void	ClapTrap::attack(const std::string &target) {
	if (hitPoints > 0 && energyPoints > 0)
	{
		std::cout << "ClapTrap " << name << " attacks "<< target << ", causing " << attackDamage << " points of damage!" << std::endl;
		energyPoints--;
	}
}

void	ClapTrap::takeDamage(unsigned int amount) {
	hitPoints -= amount;
	std::cout << "ClapTrap " << name << " take damage " << amount << ", now hitPoints " << hitPoints  << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (hitPoints > 0 && energyPoints > 0) {
		hitPoints += amount;
		std::cout << name << " has been repaired!" << std::endl;
		energyPoints--;
	}
}