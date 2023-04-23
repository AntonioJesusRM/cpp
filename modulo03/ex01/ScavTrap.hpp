/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-mo <aruiz-mo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 12:47:05 by aruiz-mo          #+#    #+#             */
/*   Updated: 2023/04/23 13:30:12 by aruiz-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
public:
	ScavTrap();
	ScavTrap(const ScavTrap& st);
	ScavTrap( const std::string name);
	~ ScavTrap();
	void attack(const std::string& target);
	void guardGate();
};

#endif