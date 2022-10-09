/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echrysta <echrysta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 14:02:04 by echrysta          #+#    #+#             */
/*   Updated: 2022/10/09 14:02:05 by echrysta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
	std::cout << "ScavTrap " << name << " constructor has been called" << std::endl;
}

ScavTrap::ScavTrap(const std::string nameInput) : ClapTrap("BASEClapTrap"){
	name = nameInput;
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
	std::cout << "ScavTrap " << name << " constructor has been called" << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " << name << " destructor has been called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap("BaseClapTrap") {
	*this = copy;
	std::cout << "ScavTrap " << name << " copy constructor has been called" << std::endl;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &copyObject) {
	if (this != &copyObject)
	{
		name = copyObject.name;
		hitPoints = copyObject.hitPoints;
		energyPoints = copyObject.energyPoints;
		attackDamage = copyObject.attackDamage;
		std::cout << "ScavTrap " <<  name <<  " copy assignment operator has been called " << copyObject.name << std::endl;
		return (*this);
	}
	return (*this);
}

void ScavTrap::attack(const std::string &target) {
    std::cout << "ScavTrap " << name << " attack " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}