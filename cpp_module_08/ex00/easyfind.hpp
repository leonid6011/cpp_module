/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echrysta <echrysta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 16:05:27 by echrysta          #+#    #+#             */
/*   Updated: 2022/10/29 19:12:08 by echrysta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <exception>

template <typename T>
typename T::iterator easyfind(T &cont, int trg)
{
	typename T::iterator it;

	it = std::find(cont.begin(), cont.end(), trg);
	if (it != cont.end())
		return (it);
	else
		throw ("Element not found in container!");
}

#endif