/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echrysta <echrysta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 22:36:06 by echrysta          #+#    #+#             */
/*   Updated: 2022/10/25 00:14:10 by echrysta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	std::cout << "========================================================" << std::endl;
	
	try
	{
		Bureaucrat Leonid("Leonid", HIGH);
		
		std::cout << Leonid;
	}
	catch (std::exception &e)
	{
		std::cerr << "Exception! You cannot create such a bureaucrat: " << e.what() << std::endl;
	}
	
	std::cout << "========================================================" << std::endl;
	
	try
	{
		Bureaucrat Leonid("Leonid", HIGH - 1);
		
		std::cout << Leonid;
	}
	catch (std::exception &e)
	{
		std::cerr << "Exception! You cannot create such a bureaucrat: " << e.what() << std::endl;
	}
	
	std::cout << "========================================================" << std::endl;
	
	try
	{
		Bureaucrat Leonid("Leonid", LOW + 1);
		
		std::cout << Leonid;
	}
	catch (std::exception &e)
	{
		std::cerr << "Exception! You cannot create such a bureaucrat: " << e.what() << std::endl;
	}
	
	std::cout << "========================================================" << std::endl;
	
	try
	{
		Bureaucrat Leonid("Leonid", HIGH);
		
		std::cout << Leonid;
		Leonid.rankDownBureaucrat();
		std::cout << Leonid;
		Leonid.rankUpBureaucrat();
		std::cout << Leonid;
		Leonid.rankUpBureaucrat();
	}
	catch (std::exception &e)
	{
		std::cerr << "Exception! You cannot change rank: " << e.what() << std::endl;
	}
	
	std::cout << "========================================================" << std::endl;
}

//valgrind --leak-check=full ./Bureaucrat