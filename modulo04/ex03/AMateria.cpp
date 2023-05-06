/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-mo <aruiz-mo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 18:44:18 by aruiz-mo          #+#    #+#             */
/*   Updated: 2023/05/06 09:39:14 by aruiz-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type):type(type)
{
	std::cout << "AMateria type constructor called" << std::endl;
}

AMateria::~AMateria()
{
	std::cout << "AMateria default destructor called" << std::endl;
}

std::string const &AMateria::getType()const
{
	return (this->type);
}

void AMateria::use(ICharacter& target)
{
	std::cout << this->type << "used by" << target.getName()<< std::endl;
}
