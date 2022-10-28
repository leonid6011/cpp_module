/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echrysta <echrysta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 20:56:26 by echrysta          #+#    #+#             */
/*   Updated: 2022/10/28 13:27:56 by echrysta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(void)
{
	int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	
	std::string name[6] = {"L", "E", "O", "N", "I", "D"};

	char hello[5] = {'h', 'e', 'l', 'l', 'o'};

	iter(arr, 10, print);
	std::cout << std::endl;

	iter(name, 6, print);
	std::cout << std::endl;

	iter(hello, 5, print);
	std::cout << std::endl;

	iter(arr, 10, plusFun);
	std::cout << std::endl;
	
}

//valgrind --leak-check=full ./iter