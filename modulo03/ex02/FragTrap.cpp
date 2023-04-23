/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-mo <aruiz-mo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 12:46:43 by aruiz-mo          #+#    #+#             */
/*   Updated: 2023/04/23 14:30:30 by aruiz-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap():ClapTrap()
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap::FragTrap( const FragTrap& ct):ClapTrap(ct)
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap::FragTrap( const std::string name):ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap constructor with name called" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->_name << " gives a high five" << std::endl;
}