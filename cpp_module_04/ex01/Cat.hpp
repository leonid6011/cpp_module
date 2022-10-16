/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echrysta <echrysta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 19:57:15 by echrysta          #+#    #+#             */
/*   Updated: 2022/10/16 15:57:20 by echrysta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
	private:
		Brain* brainCat;
	public:
		Cat();
		virtual ~Cat();
		Cat(const Cat &copy);
		Cat &operator=(const Cat &copy);

		virtual void makeSound() const;
		Brain &getBrain() const;
};

#endif