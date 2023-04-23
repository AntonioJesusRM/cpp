/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-mo <aruiz-mo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 12:47:05 by aruiz-mo          #+#    #+#             */
/*   Updated: 2023/04/23 14:00:34 by aruiz-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
public:
	FragTrap();
	FragTrap(const FragTrap& st);
	FragTrap( const std::string name);
	~FragTrap();
	void highFivesGuys(void);
};

#endif