/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-mo <aruiz-mo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 18:36:09 by aruiz-mo          #+#    #+#             */
/*   Updated: 2023/04/27 18:36:22 by aruiz-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice():AMateria("ice")
{
	std::cout << "Ice default constructor called" << std::endl;
}

Ice::Ice(const Ice& cpy)
{
	*this = cpy;
	std::cout << "Ice copy constructor called" << std::endl;
}

Ice& Ice::operator=(const Ice& ice)
{
	if (&ice != this)
		this->type = ice.type;
	return (*this);
}

Ice::~Ice()
{
	std::cout << "Ice default destructor called" << std::endl;
}

AMateria *Ice::clone(void)const
{
	return (new Ice(*this));
}

void Ice::use(ICharacter& target)
{
	std::cout << "Ice: *Shoots an ice bolt at " << target.getName() << " *" << std::endl;
}