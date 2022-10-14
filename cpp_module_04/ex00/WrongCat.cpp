/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echrysta <echrysta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 21:28:24 by echrysta          #+#    #+#             */
/*   Updated: 2022/10/14 16:54:58 by echrysta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "WrongCat -> Default constructor has been called" << std::endl;
	type = "WrongCat";
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat -> Destructor has been called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copyObject) : WrongAnimal()
{
	std::cout << "WrongCat -> Copy constructor has been called" << std::endl;
	*this = copyObject;
}

WrongCat &WrongCat::operator=(const WrongCat &copyObject)
{
	std::cout << "WrongCat -> Operator overload = has been called" << std::endl;
	if (this != &copyObject)
	{
		type = copyObject.type;
		return (*this);
	}
	return (*this);
}

void WrongCat::makeSound(void) const
{
	std::cout << "WrongCat -> meow! meow! meow!" << std::endl;
}