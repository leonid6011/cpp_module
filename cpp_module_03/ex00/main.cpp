/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echrysta <echrysta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 14:00:36 by echrysta          #+#    #+#             */
/*   Updated: 2022/10/09 14:00:37 by echrysta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap Leonid("Leonid");
    ClapTrap Lol;
    
    Lol.attack("Leonid");
    Leonid.takeDamage(1);
    Leonid.beRepaired(1);
}