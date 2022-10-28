/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echrysta <echrysta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 20:53:01 by echrysta          #+#    #+#             */
/*   Updated: 2022/10/28 00:01:02 by echrysta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>
#include <string>


template<typename T>
void iter(T* array, size_t length, void (*function)(T&))
{
	for (size_t i = 0; i < length; i++)
		(*function)(array[i]);
}

template<typename T>
void print(T &nbr)
{
	std::cout << nbr;
}

template<typename T>
void plusFun(T &n)
{
	std::cout << n + n  << " ";
}

#endif