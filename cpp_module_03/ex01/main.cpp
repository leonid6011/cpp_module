/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echrysta <echrysta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 14:00:12 by echrysta          #+#    #+#             */
/*   Updated: 2022/10/09 14:00:13 by echrysta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
    ClapTrap Leonid("Leonid");
    ClapTrap lol;
    
    lol.attack("Leonid");
    Leonid.takeDamage(2);
    lol.attack("Leonid");
    Leonid.beRepaired(1);

    std::cout << "================================" << std::endl;

    ScavTrap LeonidNew("LeonidNew");
	ScavTrap AndrewNew("AndrewNew");

	LeonidNew.attack("AndrewNew");
	AndrewNew.takeDamage(20);
	AndrewNew.beRepaired(1);
	LeonidNew.guardGate();
	AndrewNew.guardGate();
}