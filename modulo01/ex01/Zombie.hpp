/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-mo <aruiz-mo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 15:45:22 by aruiz-mo          #+#    #+#             */
/*   Updated: 2023/04/18 15:58:45 by aruiz-mo         ###   ########.fr       */
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
	Zombie(void);
	~Zombie(void);
	void setName(std::string const name);
	void announce( void );
};

Zombie* zombieHorde( int N, std::string name );

#endif