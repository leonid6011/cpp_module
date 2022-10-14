/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echrysta <echrysta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 21:08:41 by echrysta          #+#    #+#             */
/*   Updated: 2022/10/13 21:12:52 by echrysta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog -> Default constructor has been called" << std::endl;
	type = "Dog";
}

Dog::~Dog()
{
	std::cout << "Dog -> Destructor has been called" << std::endl;
}

Dog::Dog(const Dog &copyObject) : Animal()
{
	std::cout << "Dog -> Copy constructor has been called" << std::endl;
	*this = copyObject;
}

Dog &Dog::operator=(const Dog &copyObject)
{
	std::cout << "Dog -> Operator overload = has been called" << std::endl;
	if (this != &copyObject)
	{
		type = copyObject.type;
		return (*this);
	}
	return (*this);
}

void Dog::makeSound(void) const
{
	std::cout << "Dog -> woof! woof! woof!" << std::endl;
}