/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-mo <aruiz-mo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 10:51:01 by aruiz-mo          #+#    #+#             */
/*   Updated: 2023/05/06 09:51:04 by aruiz-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal():type("Default")
{
	std::cout << "Default constructor called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Destructor called" << std::endl;
}

Animal::Animal(const Animal& an)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = an;
}

Animal& Animal::operator=(const Animal& an)
{
	if (&an != this)
		this->type = an.type;
	return (*this);
}

void Animal::makeSound()const
{
	std::cout << "***Animal defualt sound***" << std::endl;
}

std::string Animal::getType() const
{
	return (this->type);
}