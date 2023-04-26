/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-mo <aruiz-mo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 16:42:06 by aruiz-mo          #+#    #+#             */
/*   Updated: 2023/04/24 16:52:41 by aruiz-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

Brain::Brain(const Brain& br)
{
	std::cout << "Brain copy constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		if (br.ideas[i].length() > 0)
			this->ideas[i] = br.ideas[i];
}

Brain& Brain::operator=(const Brain& br)
{
	if (&br != this)
	{
		for (int i = 0; i < 100; i++)
			if (br.ideas[i].length() > 0)
				this->ideas[i] = br.ideas[i];
	}
	return (*this);
}
