/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echrysta <echrysta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 21:09:05 by echrysta          #+#    #+#             */
/*   Updated: 2022/10/16 15:57:23 by echrysta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
	private:
		Brain* brainDog;
	public:
		Dog();
		virtual ~Dog();
		Dog(const Dog &copy);
		Dog &operator=(const Dog &copy);

		virtual void makeSound() const;
		Brain &getBrain() const;
};

#endif