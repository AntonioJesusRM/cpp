/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-mo <aruiz-mo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 16:06:56 by aruiz-mo          #+#    #+#             */
/*   Updated: 2023/04/23 16:58:58 by aruiz-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap: public FragTrap, public ScavTrap
{
private:
	std::string _name;
public:
	DiamondTrap();
	DiamondTrap( const DiamondTrap& ct);
	DiamondTrap( const std::string name);
	~DiamondTrap();
	void attack(const std::string& target);
	void whoAmI();
};

#endif