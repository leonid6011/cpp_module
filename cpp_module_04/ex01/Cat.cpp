/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echrysta <echrysta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 19:56:56 by echrysta          #+#    #+#             */
/*   Updated: 2022/10/15 20:04:23 by echrysta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/* ========================================================================== */

Cat::Cat() : Animal()
{
	brainCat = new Brain();
	type = "Cat";
	std::cout << "Cat -> Default constructor has been called" << std::endl;
}

Cat::~Cat()
{
    delete brainCat;
	std::cout << "Cat -> Destructor has been called" << std::endl;
}

Cat::Cat(const Cat &copyObject) : Animal()
{
	brainCat = new Brain();
	*this = copyObject;
	std::cout << "Cat -> Copy constructor has been called" << std::endl;
}

Cat &Cat::operator=(const Cat &copyObject)
{
	std::cout << "Cat -> Operator overload = has been called" << std::endl;
	if (this != &copyObject)
	{
		for (int i = 0; i < numIdeas; i++)
		{
            brainCat->setIdea(i, copyObject.brainCat->getIdea(i));
        }
		type = copyObject.type;
		return (*this);
	}
	return (*this);
}

/* ========================================================================== */

void Cat::makeSound(void) const
{
	std::cout << "Cat -> meow! meow! meow!" << std::endl;
}

Brain &Cat::getBrain() const
{
    return (*brainCat);
}

/* ========================================================================== */
