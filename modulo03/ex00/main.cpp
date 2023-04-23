/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-mo <aruiz-mo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 11:39:21 by aruiz-mo          #+#    #+#             */
/*   Updated: 2023/04/23 14:31:54 by aruiz-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main( void )
{
	std::cout << "Creacion de ClapTrap:" << std::endl;
    ClapTrap clap("Jose");
	clap.attack("Staff");
	clap.takeDamage(2);
	clap.beRepaired(7);
	clap.takeDamage(8);
	clap.beRepaired(1);
	clap.beRepaired(1);
	clap.beRepaired(1);
	clap.beRepaired(1);
	clap.beRepaired(1);
	clap.beRepaired(1);
	clap.beRepaired(1);
	clap.beRepaired(1);
	clap.beRepaired(1);
	clap.takeDamage(15);
    return 0;
}