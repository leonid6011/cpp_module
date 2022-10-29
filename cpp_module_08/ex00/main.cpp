/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echrysta <echrysta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 16:05:35 by echrysta          #+#    #+#             */
/*   Updated: 2022/10/29 19:12:19 by echrysta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

#include <vector>
#include <list>
#include <iostream>

int main()
{
	std::vector<int> vector;
	std::vector<int>::iterator it;
	
	for (int i = 1; i <= 5; i++)
		vector.push_back(i);
	try
	{
		it = easyfind(vector, 1);
		std::cout << "Element found: " << *it << std::endl;
	}
	catch(const char *msg)
	{
		std::cout << msg << std::endl;
	}

	try
	{
		it = easyfind(vector, 10);
		std::cout << "Element found: " << *it << std::endl;
	}
	catch(const char *msg)
	{
		std::cout << msg << std::endl;
	}

    std::cout << std::endl;

	std::list<int> list;
    std::list<int>::iterator it_list;
	
	for (int i = 1; i <= 5; i++)
		list.push_back(i);
    
    try
	{
		it_list = easyfind(list, 2);
		std::cout << "Element found: " << *it_list << std::endl;
	}
	catch(const char *msg)
	{
		std::cout << msg << std::endl;
	}

	try
	{
		it_list = easyfind(list, 10);
		std::cout << "Element found: " << *it_list << std::endl;
	}
	catch(const char *msg)
	{
		std::cout << msg << std::endl;
	}
}

//valgrind --leak-check=full ./easyfind 