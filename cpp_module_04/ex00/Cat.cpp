/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echrysta <echrysta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 19:56:56 by echrysta          #+#    #+#             */
/*   Updated: 2022/10/13 21:03:20 by echrysta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat -> Default constructor has been called" << std::endl;
	type = "Cat";
}

Cat::~Cat()
{
	std::cout << "Cat -> Destructor has been called" << std::endl;
}

Cat::Cat(const Cat &copyObject) : Animal()
{
	std::cout << "Cat -> Copy constructor has been called" << std::endl;
	*this = copyObject;
}

Cat &Cat::operator=(const Cat &copyObject)
{
	std::cout << "Cat -> Operator overload = has been called" << std::endl;
	if (this != &copyObject)
	{
		type = copyObject.type;
		return (*this);
	}
	return (*this);
}

void Cat::makeSound(void) const
{
	std::cout << "Cat -> meow! meow! meow!" << std::endl;
}