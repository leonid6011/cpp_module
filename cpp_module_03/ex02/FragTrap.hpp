/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echrysta <echrysta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 14:01:59 by echrysta          #+#    #+#             */
/*   Updated: 2022/10/09 14:02:00 by echrysta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
    public:
        FragTrap();
	    FragTrap(std::string name);
	    ~FragTrap();
	    FragTrap(const FragTrap &copy);

	    FragTrap &operator=(const FragTrap &copy);
	    void highFivesGuys();
};

#endif