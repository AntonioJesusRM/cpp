/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-mo <aruiz-mo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 09:56:25 by aruiz-mo          #+#    #+#             */
/*   Updated: 2023/04/18 16:13:59 by aruiz-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	std::cout << "randomChump:" << std::endl;
	randomChump("Zombie1");
	std::cout << "newZombie:" << std::endl;
	Zombie *dead = newZombie("Zombie2");
	dead->announce();
	delete dead;
	return (0);
}