/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echrysta <echrysta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 19:34:02 by echrysta          #+#    #+#             */
/*   Updated: 2022/10/14 17:07:47 by echrysta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int	main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* wrongMeta= new WrongAnimal();
	const WrongAnimal* wrongCat = new WrongCat();

	std::cout << "++++++++++++++++++++++++++++++++++++" << std::endl;

	std::cout << meta->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << wrongMeta->getType() << " " << std::endl;
	std::cout << wrongCat->getType() << " " << std::endl;
	
	std::cout << "++++++++++++++++++++++++++++++++++++" << std::endl;
	
	meta->makeSound();
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	wrongMeta->makeSound();
	wrongCat->makeSound();
	
	std::cout << "++++++++++++++++++++++++++++++++++++" << std::endl;

	delete i; //чистим за собой память
	delete j; //чистим за собой память
	delete meta;
	delete wrongCat;
	delete wrongMeta;
	
	return 0;
}

//valgrind --leak-check=full ./Animal