/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-mo <aruiz-mo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 16:06:59 by aruiz-mo          #+#    #+#             */
/*   Updated: 2023/04/23 17:04:01 by aruiz-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap():FragTrap(), ScavTrap()
{
	std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called" << std::endl;
}
DiamondTrap::DiamondTrap( const DiamondTrap& dt):FragTrap(dt), ScavTrap(dt)
{
	std::cout << "DiamondTrap copy constructor called" << std::endl;
}

DiamondTrap::DiamondTrap( const std::string name):_name(name)
{
	ScavTrap::ClapTrap::_name = name + "_clap_name";
	this->_hitPoints = FragTrap::_hitPoints;
	this->_attackDamage = FragTrap::_attackDamage;
	this->_energyPoints = FragTrap::_energyPoints;
	std::cout << "DiamondTrap constructor with name called" << std::endl;

}

void DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << "I am: "<< this->_name << std::endl <<"My claptrap name is:  " << FragTrap::_name << std::endl;
}
