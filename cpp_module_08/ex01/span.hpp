/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echrysta <echrysta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 12:23:29 by echrysta          #+#    #+#             */
/*   Updated: 2022/10/29 19:41:58 by echrysta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <algorithm> 
# include <vector>
# include <iterator>
# include <cmath>

typedef std::vector<int>::iterator it;

class Span
{
    private:
		unsigned int		N;
		unsigned int		sizeVector;
		std::vector<int>	vector;
		
	public:
		Span(unsigned int N);
		~Span();
		Span(Span const &copyObject);
		Span const &operator=(Span const &copyObject);

		unsigned int		getN(void) const;
		std::vector<int>	getVector(void) const;
		unsigned int		getSizeVector(void) const;

		void	addNumber(int nbr);
		void	superAddNumber(std::vector<int>::iterator it, std::vector<int>::iterator ite);
		int		longestSpan(void);
		int		shortestSpan(void);
};

#endif
