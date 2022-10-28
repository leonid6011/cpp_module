/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echrysta <echrysta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 21:03:26 by echrysta          #+#    #+#             */
/*   Updated: 2022/10/26 23:08:38 by echrysta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>
#include <iostream>

#include "Data.hpp"

uintptr_t serialize(Data *ptr)
{
	uintptr_t raw;

	raw = reinterpret_cast<uintptr_t>(ptr);
	return (raw);
}

Data *deserialize(uintptr_t raw)
{
	Data *ptr;

	ptr = NULL;
	ptr = reinterpret_cast<Data *>(raw);
	return (ptr);
}

int main(void)
{
	uintptr_t		raw;
	Data			*first;
	Data			*second;
	Data			dataTest(42);


	first = &dataTest;
	raw = serialize(first);
	std::cout << "Get nbr: " << dataTest.getData() << std::endl;
	std::cout << "Before: " << first << std::endl;
	std::cout << "Raw: " << raw << std::endl;
	second = deserialize(raw);
	std::cout << "After:  " << second << std::endl;
	std::cout << "Get nbr: " << dataTest.getData() << std::endl;
	return (0);
}