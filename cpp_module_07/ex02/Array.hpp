/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echrysta <echrysta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 21:00:12 by echrysta          #+#    #+#             */
/*   Updated: 2022/10/28 13:15:29 by echrysta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <stdlib.h>

template<typename T>
class Array
{
	private:
		unsigned int	sizeArray;
		T				*arr;
	public:
		Array();
		Array(unsigned int = 0);
		Array(const Array &copyObject);
		~Array();
		Array &operator=(const Array &copyObject);
		T &operator[](size_t const &index);
		unsigned int getSizeArray() const;
};

template <typename T>
Array<T>::Array() : sizeArray(0), arr(NULL) 
{
	std::cout << "-> Default constructor has been called." << std::endl;
};

template <typename T>
Array<T>::Array(unsigned int n) : sizeArray(n), arr(new T[n])
{
	std::cout << "-> Default constructor has been called." << std::endl;
};

template <typename T>
Array<T>::Array(const Array &copyObject)
{
	arr = new T[copyObject.sizeArray];
	sizeArray = copyObject.sizeArray;
	for (unsigned int i = 0; i < sizeArray; ++i)
		arr[i] = copyObject.arr[i];
	std::cout << "-> Copy constructor has been called." << std::endl;
};

template <typename T>
Array<T>::~Array()
{
	delete[] arr;
	arr = NULL;
	std::cout << "-> Destructor has been called." << std::endl;
};

template <typename T>
Array<T> &Array<T>::operator=(const Array<T> &copyObject)
{
	Array<T> tmp(copyObject);
	delete[] arr;
	sizeArray = tmp.sizeArray;
	arr = new T[tmp.sizeArray];
	for (unsigned int i = 0; i < sizeArray; ++i)
		arr[i] = tmp.arr[i];
	std::cout << "-> Operator overload = has been called" << std::endl;
	return (*this);
}

template <typename T>
T &Array<T>::operator[](size_t const &index)
{
	if (index >= sizeArray)
		throw (std::out_of_range("Out of bounds array!"));
	return (arr[index]);
}

template <typename T>
unsigned int Array<T>::getSizeArray() const
{
	return (sizeArray);
}

#endif