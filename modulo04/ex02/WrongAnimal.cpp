/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-mo <aruiz-mo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 11:51:19 by aruiz-mo          #+#    #+#             */
/*   Updated: 2023/04/24 11:52:18 by aruiz-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal():type("Sin definir")
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& an)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = an;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& an)
{
	if (&an != this)
		this->type = an.type;
	return (*this);
}

void WrongAnimal::makeSound()const
{
	std::cout << "***WrongAnimal defualt sound***" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return (this->type);
}