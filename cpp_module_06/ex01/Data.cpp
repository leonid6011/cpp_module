/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echrysta <echrysta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 21:04:26 by echrysta          #+#    #+#             */
/*   Updated: 2022/10/26 23:07:39 by echrysta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data(int nbrInput) : nbr(nbrInput) 
{}

Data::~Data()
{}

Data::Data(Data &copyObject)
{
    nbr = copyObject.nbr;
}

Data& Data::operator=(Data &copyObject)
{
    if (this != &copyObject)
    {
        nbr = copyObject.nbr;
        return *this;
    }
    return *this;
}

int Data::getData() const
{
	return (this->nbr);
}