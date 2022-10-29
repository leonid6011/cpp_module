/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echrysta <echrysta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 12:23:01 by echrysta          #+#    #+#             */
/*   Updated: 2022/10/29 19:40:53 by echrysta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

// int main()
// {
// 	Span sp = Span(5);
	
// 	sp.addNumber(6);
// 	sp.addNumber(3);
// 	sp.addNumber(17);
// 	sp.addNumber(9);
// 	sp.addNumber(11);
	
// 	std::cout << sp.shortestSpan() << std::endl;
// 	std::cout << sp.longestSpan() << std::endl;
// 	return 0;
// }

int main()
{
	std::cout << "========================================================" << std::endl;

	Span vector(0);
		
	try
	{
		vector.longestSpan();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		vector.shortestSpan();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
		
	std::cout << "========================================================" << std::endl;

	Span vector2(1);

	vector2.addNumber(1);
		
	try
	{
		vector2.longestSpan();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		vector2.shortestSpan();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	
	std::cout << "========================================================" << std::endl;
		
	Span vector3(15000);

	try
	{
		for (unsigned int i = 0; i < 15000; i++)
			vector3.addNumber(i);
		std::cout << vector3.getVector().at(150) << std::endl;
		std::cout << vector3.getVector().at(10000) << std::endl;
		std::cout << vector3.getVector().at(12000) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	
	std::cout << "========================================================" << std::endl;

	Span vector4(6);

	vector4.addNumber(1);
	vector4.addNumber(2);
	vector4.addNumber(3);
	vector4.addNumber(4);
	vector4.addNumber(5);
	vector4.addNumber(6);

	std::cout << "Vector: ";

	try
	{
		vector4.addNumber(7);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << ": max capacity!" << std::endl;
	}

	std::cout << "========================================================" << std::endl;

	Span vector5(10);

	vector5.addNumber(74);
	vector5.addNumber(2);
	vector5.addNumber(45);
	vector5.addNumber(35);
	vector5.addNumber(66);
	vector5.addNumber(27);
	vector5.addNumber(72);
	vector5.addNumber(31);
	vector5.addNumber(89);
	vector5.addNumber(5);
		
	std::cout << "short span: " << vector5.shortestSpan() << std::endl;
	std::cout << "long lpan: " << vector5.longestSpan() << std::endl;

	std::cout << "========================================================" << std::endl;

	srand(time(0));
	std::vector<int> vector6(10000);
	std::generate (vector6.begin(), vector6.end(), rand);
	Span mySpan(10000);

	mySpan.superAddNumber(vector6.begin(), vector6.end());
	std::cout << mySpan.shortestSpan() << std::endl;
	std::cout << mySpan.longestSpan() << std::endl;

	std::cout << "========================================================" << std::endl;
	
	return (0);
}

//valgrind --leak-check=full ./span