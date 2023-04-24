/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-mo <aruiz-mo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 15:45:18 by aruiz-mo          #+#    #+#             */
/*   Updated: 2023/04/18 16:01:15 by aruiz-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	if ( N <= 0 )
		return ( NULL );
	
	Zombie* horde = new Zombie[N];

	for (int i=0; i < N; i++)
	{
		horde[i].setName(name);
	}
	return (horde);
}
