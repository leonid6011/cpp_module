/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echrysta <echrysta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 17:41:08 by echrysta          #+#    #+#             */
/*   Updated: 2022/10/14 18:21:58 by echrysta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#define numIdeas 100

# include <iostream>

class Brain
{
	protected:
		std::string ideas[numIdeas];
	public:
		Brain();
		virtual ~Brain();
		Brain(const Brain &copyObject);
		Brain	&operator=(const Brain &copy);

		void		setIdea(int index, std::string idea);
		std::string	getIdea(int index);
};

#endif