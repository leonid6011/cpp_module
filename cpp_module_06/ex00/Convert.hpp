/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echrysta <echrysta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 12:44:40 by echrysta          #+#    #+#             */
/*   Updated: 2022/10/27 20:00:31 by echrysta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVER_HPP
# define CONVER_HPP

#include <iostream>
#include <stdexcept>
#include <limits>
#include <string>
#include <cstdlib>
class Convert
{
    private:
		std::string	arguments;
		int			typeArg;
		char		charArg; // typeArg = 1
		int			intArg; // typeArg = 0
		float		floatArg; // typeArg = 2
		double		doubleArg; // typeArg = 3
	public:
		Convert();
		Convert(std::string str);
		~Convert();
		Convert(Convert const &copyObject);
		Convert &operator=(Convert const &copyObject);

		std::string getArguments() const;

		bool 	checkEx() const;
		int		findType();
		
		void	convertInt() const;
		void    convertChar() const;
		void	convertFloat() const;
		void	convertDouble() const;

		void	display() const;
};

#endif