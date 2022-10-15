/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echrysta <echrysta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 17:40:59 by echrysta          #+#    #+#             */
/*   Updated: 2022/10/15 20:22:05 by echrysta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

/* ========================================================================== */
Brain::Brain()
{
	std::cout << "Brain -> Default constructor has been called" << std::endl;

    for (int i = 0; i < numIdeas; i++)
        ideas[i] = "it's empty";
}

Brain::~Brain()
{
	std::cout << "Brain -> Destructor has been called" << std::endl;
}

Brain::Brain(const Brain &copyObject)
{
	std::cout << "Brain -> Copy constructor has been called" << std::endl;
	*this = copyObject;
}

Brain	&Brain::operator=(const Brain &copyObject)
{
	int	i;
	
	std::cout << "Brain -> Operator overload = has been called" << std::endl;
	if (this != &copyObject)
	{
		while (i < 100)
		{
			this->ideas[i] = copyObject.ideas[i];
			i++;
		}
		return (*this);
	}
	return (*this);
}

/* ========================================================================== */

void	Brain::setIdea(int index, std::string idea)
{
	if (index < 0 || index > numIdeas - 1)
	{
		std::cout << "Index not in range [0, 99]" << std::endl;
		return ;
    }
    this->ideas[index] = idea;
}

std::string	Brain::getIdea(int index)
{
	if (index < 0 || index > numIdeas - 1)
	{
		std::cout << "Index not in range [0, 99]" << std::endl;
		return ("");
    }
    return (ideas[index]);
}

/* ========================================================================== */

