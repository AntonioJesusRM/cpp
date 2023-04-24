/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-mo <aruiz-mo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 09:56:52 by aruiz-mo          #+#    #+#             */
/*   Updated: 2023/04/17 12:19:41 by aruiz-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ZOMBIE_H
#define ZOMBIE_H
#include <iostream>

class Zombie{

private:
	std::string name;
public:
	Zombie(std::string name);
	~Zombie(void);
	void announce( void );
};

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

#endif