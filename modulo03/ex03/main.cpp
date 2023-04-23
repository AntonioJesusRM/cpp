/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-mo <aruiz-mo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 11:39:21 by aruiz-mo          #+#    #+#             */
/*   Updated: 2023/04/23 17:06:27 by aruiz-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main( void )
{
	std::cout << "Creacion de ClapTrap:" << std::endl;
	ClapTrap clap("Jose");
	clap.attack("Staff");
	clap.takeDamage(90);
	clap.beRepaired(30);
	clap.takeDamage(40);
	std::cout << std::endl << "Creacion de ScavTrap:" << std::endl;
    ScavTrap scav("Juan");
	scav.attack("Staff");
	scav.guardGate();
	scav.takeDamage(90);
	scav.beRepaired(30);
	scav.takeDamage(40);
	std::cout << std::endl << "Creacion de FragTrap:" << std::endl;
    FragTrap frag("Pedro");
	frag.attack("Staff");
	frag.takeDamage(90);
	frag.beRepaired(30);
	frag.highFivesGuys();
	frag.takeDamage(40);
	std::cout << std::endl << "Creacion de DiamondTrap:" << std::endl;
	DiamondTrap diamond("Luis");
	diamond.attack("Staff");
	diamond.takeDamage(90);
	diamond.guardGate();
	diamond.beRepaired(30);
	diamond.highFivesGuys();
	diamond.whoAmI();
	diamond.takeDamage(40);
	std::cout << std::endl;
	
}