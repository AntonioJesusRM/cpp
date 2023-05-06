/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-mo <aruiz-mo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 09:28:58 by aruiz-mo          #+#    #+#             */
/*   Updated: 2023/05/06 09:29:49 by aruiz-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure():AMateria("cure")
{
	std::cout << "Cure default constructor called" << std::endl;
}

Cure::Cure(const Cure &cpy):AMateria("cure")
{
	std::cout << "Cure copy constructor called" << std::endl;
	*this = cpy;
}

Cure &Cure::operator=(const Cure &cpy)
{
	if (&cpy != this)
		this->type = cpy.type;
	return (*this);
}

Cure::~Cure()
{
	std::cout << "Cure default destructor called" << std::endl;
}

AMateria *Cure::clone(void) const
{
	Cure *cpy = new Cure(*this);
	return (cpy);
}

void Cure::use(ICharacter& target)
{
	AMateria::use(target);
	std::cout << "*Heals " << target.getName() << "’s wounds*" << std::endl;
}
