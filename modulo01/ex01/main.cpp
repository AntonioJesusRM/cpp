/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-mo <aruiz-mo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 15:45:24 by aruiz-mo          #+#    #+#             */
/*   Updated: 2023/04/18 16:12:02 by aruiz-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie *horde;

	horde = zombieHorde(5, "zombie");
	if (horde == NULL)
	{
		std::cout << "Error al hacer la horda, intenta que el numero de zombies sea > 0." << std::endl;
		return (0);
	}
	for (int i = 0; i < 5; i++)
		horde[i].announce();
	delete [] horde;
	return (0);
}