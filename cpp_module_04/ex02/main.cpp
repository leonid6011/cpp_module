/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echrysta <echrysta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 17:21:26 by echrysta          #+#    #+#             */
/*   Updated: 2022/10/15 21:07:04 by echrysta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	std::cout << "===================CAT====================" << std::endl;

	Cat *catOne = new Cat();
	
	catOne->getBrain().setIdea(1, "eat");
	std::cout << "catOne's idea: " << catOne->getBrain().getIdea(1) << std::endl;
	std::cout << "catOne's idea: " << catOne->getBrain().getIdea(2) << std::endl;
	std::cout << "Adress catOne: " << &catOne->getBrain() << std::endl;
	std::cout << "========================================" << std::endl;
	
	Cat catTwo(*catOne);
	delete catOne;
	
	std::cout << "catTwo's idea: " << catTwo.getBrain().getIdea(1) << std::endl;
	std::cout << "Adress catTwo: " << &catTwo.getBrain() << std::endl;
	std::cout << "========================================" << std::endl;
	
	Cat catThree;
	catThree = catTwo;
	
	std::cout << "catThree's " << catThree.getBrain().getIdea(1) << std::endl;
	std::cout << "Adress catThree: " << &catThree.getBrain() << std::endl;
	std::cout << "========================================" << std::endl;
	std::cout << "===================DOG====================" << std::endl;

	Dog *dogOne = new Dog();
	
	dogOne->getBrain().setIdea(1, "eat");
	std::cout << "dogOne's idea: " << dogOne->getBrain().getIdea(1) << std::endl;
	std::cout << "dogOne's idea: " << dogOne->getBrain().getIdea(2) << std::endl;
	std::cout << "Adress dogOne: " << &dogOne->getBrain() << std::endl;
	std::cout << "========================================" << std::endl;
	
	Dog dogTwo(*dogOne);
	delete dogOne;
	
	std::cout << "dogTwo's idea: " << dogTwo.getBrain().getIdea(1) << std::endl;
	std::cout << "Adress dogTwo: " << &dogTwo.getBrain() << std::endl;
	std::cout << "========================================" << std::endl;
	
	Dog dogThree;
	dogThree = dogTwo;
	
	std::cout << "dogThree's " << dogThree.getBrain().getIdea(1) << std::endl;
	std::cout << "Adress dogThree: " << &dogThree.getBrain() << std::endl;
	std::cout << "========================================" << std::endl;
	std::cout << "====================Abstract====================" << std::endl;
	//const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << "========================================" << std::endl;

	//std::cout << meta->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	
	std::cout << "========================================" << std::endl;
	
	//meta->makeSound();
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	
	std::cout << "========================================" << std::endl;

	//delete meta;
	delete i; //чистим за собой память
	delete j; //чистим за собой память

	return (0);
}

//valgrind --leak-check=full ./Animal