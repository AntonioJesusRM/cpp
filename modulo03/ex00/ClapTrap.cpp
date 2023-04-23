/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-mo <aruiz-mo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 11:39:30 by aruiz-mo          #+#    #+#             */
/*   Updated: 2023/04/23 13:49:05 by aruiz-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap():_name("Antonio")
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap& ct)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = ct;
}

ClapTrap::ClapTrap( const std::string name):_name(name)
{
	std::cout << "Constructor with name called" << std::endl;
}

ClapTrap& ClapTrap::operator=( const ClapTrap &ct )
{
	if (&ct != this)
	{
		this->_name = ct._name;
		this->_attackDamage = ct._attackDamage;
		this->_energyPoints = ct._energyPoints;
		this->_hitPoints = ct._hitPoints;
	}
	return (*this);
}

void ClapTrap::attack(const std::string& target)
{
	if (this->_energyPoints > 0 && this->_hitPoints > 0)
	{
		std::cout << "ClapTrap "<< this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
		this->_energyPoints --;
	}
	else if (this->_energyPoints < 1)
		std::cout << "ClapTrap " << this->_name << " has no energy to attack" << std::endl;
	else
		std::cout << "ClapTrap "<< this->_name << " is dead" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints > 0)
	{
		std::cout << "ClapTrap "<< this->_name << " takes " << amount << " damage!" << std::endl;
		this->_hitPoints -= amount;
	}
	if (this->_hitPoints <= 0)
		std::cout << "ClapTrap "<< this->_name << " is dead" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoints > 0 && this->_hitPoints > 0)
	{
		std::cout << "ClapTrap "<< this->_name << " repairs " << amount << " hit points!" << std::endl;
		this->_energyPoints --;
		this->_hitPoints += amount;
	}
	else if (this->_energyPoints < 1)
		std::cout << "ClapTrap " << this->_name << " has no energy to repaired" << std::endl;
	else
		std::cout << "ClapTrap "<< this->_name << " is dead" << std::endl;
}
