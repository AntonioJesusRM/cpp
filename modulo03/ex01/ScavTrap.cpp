/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-mo <aruiz-mo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 12:46:43 by aruiz-mo          #+#    #+#             */
/*   Updated: 2023/04/23 14:26:06 by aruiz-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap:: ScavTrap():ClapTrap()
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::~ ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& st):ClapTrap(st)
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string name):ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "ScavTrap constructor with name called" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (this->_energyPoints > 0 && this->_hitPoints > 0)
	{
		std::cout << "ScavTrap "<< this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
		this->_energyPoints --;
	}
	else if (this->_energyPoints < 1)
		std::cout << "ScavTrap " << this->_name << " has no energy to attack" << std::endl;
	else
		std::cout << "ScavTrap "<< this->_name << " is dead" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode!" << std::endl;
}