/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-mo <aruiz-mo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 18:44:18 by aruiz-mo          #+#    #+#             */
/*   Updated: 2023/04/27 19:55:09 by aruiz-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria():type("DefaultType")
{
	std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::AMateria(const AMateria& cpy)
{
	*this = cpy;
	std::cout << "AMateria copy constructor called" << std::endl;
}

AMateria::AMateria(std::string const & type):type(type)
{
	std::cout << "AMateria type constructor called" << std::endl;
}

AMateria& AMateria::operator=(const AMateria& am)
{
	if (&am != this)
		this->type = am.type;
	return (*this);
}

AMateria::~AMateria()
{
	std::cout << "AMateria default destructor called" << std::endl;
}

std::string const &AMateria::getType()const
{
	return (this->type);
}

AMateria *AMateria::clone(void)const
{
	return ((AMateria*)this);
}

void AMateria::use(ICharacter& target)
{
	std::cout << this->type << "used by" << target.getName()<< std::endl;
}
