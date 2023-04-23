/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-mo <aruiz-mo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 11:39:21 by aruiz-mo          #+#    #+#             */
/*   Updated: 2023/04/23 15:58:42 by aruiz-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main( void )
{
	std::cout << "Creacion de ClapTrap:" << std::endl;
	ClapTrap clap("Jose");
	clap.attack("Staff");
	clap.takeDamage(90);
	clap.beRepaired(30);
	clap.takeDamage(40);
	std::cout << "Creacion de ScavTrap:" << std::endl;
    ScavTrap scav("Juan");
	scav.attack("Staff");
	scav.guardGate();
	scav.takeDamage(90);
	scav.beRepaired(30);
	scav.takeDamage(40);
}