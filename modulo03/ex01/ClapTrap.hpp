/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-mo <aruiz-mo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 11:39:27 by aruiz-mo          #+#    #+#             */
/*   Updated: 2023/04/23 14:29:08 by aruiz-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>

class ClapTrap
{
protected:
	std::string _name;
	int _hitPoints = 10;
	int _energyPoints = 10;
	int _attackDamage = 0;
public:
	ClapTrap();
	ClapTrap( const ClapTrap& ct);
	ClapTrap( const std::string name);
	ClapTrap& operator=( const ClapTrap &ct );
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	~ClapTrap();
};

#endif