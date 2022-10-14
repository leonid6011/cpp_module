/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echrysta <echrysta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 19:36:22 by echrysta          #+#    #+#             */
/*   Updated: 2022/10/14 16:34:32 by echrysta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal -> Default constructor has been called" << std::endl;
	type = "Type";
}

Animal::~Animal()
{
	std::cout << "Animal -> Destructor has been called" << std::endl;
}

Animal::Animal(const Animal &copyObject)
{
	std::cout << "Animal -> Copy constructor has been called" << std::endl;
	*this = copyObject;
}

Animal	&Animal::operator=(const Animal &copyObject)
{
	std::cout << "Animal -> Operator overload = has been called" << std::endl;
	if (this != &copyObject)
	{
		type = copyObject.type;
		return (*this);
	}
	return (*this);
}

void	Animal::makeSound() const
{
	std::cout << "Animal -> Some Animal noise" << std::endl;
}

std::string	Animal::getType() const
{
	return (type);
}

void	Animal::setType(const std::string TypeInput)
{
	this->type = TypeInput;
}
