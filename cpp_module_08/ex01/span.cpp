/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echrysta <echrysta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 12:23:10 by echrysta          #+#    #+#             */
/*   Updated: 2022/10/29 19:31:08 by echrysta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

/* ======================================================== */

Span::Span(unsigned int inputN) : N(inputN)
{
	vector.reserve(N);
    sizeVector = 0;
}

Span::~Span()
{}

Span::Span(Span const &copyObject) : N(copyObject.N), vector(copyObject.vector)
{
	sizeVector = copyObject.vector.size();
}

Span const &Span::operator=(Span const &copyObject)
{
	this->N = copyObject.N;
	this->vector = copyObject.vector;
	this->sizeVector = copyObject.vector.size();
	return (*this);
}

/* ======================================================== */

unsigned int Span::getN(void) const
{
	return (N);
}

unsigned int Span::getSizeVector(void) const
{
	return (sizeVector);
}

std::vector<int> Span::getVector(void) const
{
	return (vector);
}

/* ======================================================== */

void Span::addNumber(int nbr)
{
	if (vector.size() >= N || sizeVector >= N)
		throw(std::out_of_range("Full memory!"));
	vector.push_back(nbr);
	sizeVector++;
}

void Span::superAddNumber(std::vector<int>::iterator it, std::vector<int>::iterator ite)
{
	while (it != ite)
	{
		this->addNumber(*it);
		it++;
	}
}

int Span::longestSpan(void)
{
	if (sizeVector == 0 || sizeVector == 1)
		throw(std::out_of_range("Need more elements for a span"));
	std::vector<int>::iterator min = std::min_element(vector.begin(), vector.end());
	std::vector<int>::iterator max = std::max_element(vector.begin(), vector.end());
	int res_longest = *max - *min;
	return (res_longest);
}

int Span::shortestSpan(void)
{
	if (sizeVector == 0 || sizeVector == 1)
		throw(std::out_of_range("Need more elements for a span"));
	std::vector<int>::iterator max = std::max_element(vector.begin(), vector.end());
	int shortest_span = *max;

	std::vector<int> vectorCopy = vector;
	std::sort(vectorCopy.begin(), vectorCopy.end());
	for (unsigned int i = 0; i < vectorCopy.size(); i++)
	{
		if (i && std::abs(vectorCopy[i] - vectorCopy[i - 1]) < shortest_span)
			shortest_span = std::abs(vectorCopy[i] - vectorCopy[i - 1]);
	}
	return (shortest_span);
}

/* ======================================================== */