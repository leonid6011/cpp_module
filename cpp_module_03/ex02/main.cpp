/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echrysta <echrysta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 14:02:01 by echrysta          #+#    #+#             */
/*   Updated: 2022/10/09 14:02:02 by echrysta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
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
	AndrewNew.beRepaired(10);
	LeonidNew.guardGate();
	AndrewNew.guardGate();

    std::cout << "================================" << std::endl;

    FragTrap LeonidNewAgain("LeonidNewAgain");
	FragTrap AndrewNewAgain("AndrewNewAgain");
	LeonidNewAgain.attack("AndrewNewAgain");
	AndrewNewAgain.takeDamage(30);
	AndrewNewAgain.beRepaired(10);
	LeonidNewAgain.highFivesGuys();
	AndrewNewAgain.highFivesGuys();
}