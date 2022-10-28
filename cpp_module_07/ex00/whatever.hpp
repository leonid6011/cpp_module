/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echrysta <echrysta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 20:41:29 by echrysta          #+#    #+#             */
/*   Updated: 2022/10/27 23:47:20 by echrysta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <string>
#include <iostream>

template <typename T>
void swap(T &a, T &b)
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}

template <typename T>
T min(T &a, T &b)
{
    if (a == b)
        return b;
    return (a < b) ? a : b;
}

template <typename T>
T max(T &a, T &b)
{
    if (a == b)
        return b;
    return (a > b) ? a : b;
}

#endif