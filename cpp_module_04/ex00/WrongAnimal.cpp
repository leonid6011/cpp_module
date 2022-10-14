/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echrysta <echrysta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 21:28:29 by echrysta          #+#    #+#             */
/*   Updated: 2022/10/14 17:08:06 by echrysta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal -> Default constructor has been called" << std::endl;
	type = "WrongType";
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal -> Destructor has been called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copyObject)
{
	std::cout << "WrongAnimal -> Copy constructor has been called" << std::endl;
	*this = copyObject;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &copyObject)
{
	std::cout << "WrongAnimal -> Operator overload = has been called" << std::endl;
	if (this != &copyObject)
	{
		type = copyObject.type;
		return (*this);
	}
	return (*this);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal -> Some WrongAnimal noise" << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return (type);
}

void	WrongAnimal::setType(const std::string TypeInput)
{
	this->type = TypeInput;
}
