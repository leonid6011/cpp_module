/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echrysta <echrysta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 14:00:04 by echrysta          #+#    #+#             */
/*   Updated: 2022/10/09 14:00:05 by echrysta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
	name = "default_name";
	hitPoints = 10;
	energyPoints = 10;
	attackDamage = 0;
	std::cout << "ClapTrap " << name << " constructor has been called" << std::endl;
}

ClapTrap::ClapTrap(const std::string nameInput) {
	name = nameInput;
	hitPoints = 10;
	energyPoints = 10;
	attackDamage = 0;
	std::cout << "ClapTrap " << name << " constructor has been called" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap " << name << " destructor has been called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy) {
	*this = copy;
	std::cout << "ClapTrap " << name << " copy constructor has been called" << std::endl;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &copyObject) {
	if (this != &copyObject)
	{
		name = copyObject.name;
		hitPoints = copyObject.hitPoints;
		energyPoints = copyObject.energyPoints;
		attackDamage = copyObject.attackDamage;
		std::cout << "ClapTrap " <<  name <<  " copy assignment operator has been called " << copyObject.name << std::endl;
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
		std::cout << "ClapTrap " <<  name << " has been repaired!"<< " Now hitPoints " << hitPoints  << std::endl;
		energyPoints--;
	}
}