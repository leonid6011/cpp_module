/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echrysta <echrysta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 13:02:20 by echrysta          #+#    #+#             */
/*   Updated: 2022/10/27 18:56:06 by echrysta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"
#include <cstdio>
int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Invalid number arguments" << std::endl;
		return (1);
	}
	Convert convert(argv[1]);
	convert.display();
	return (0);
}