/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-mo <aruiz-mo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 11:02:20 by aruiz-mo          #+#    #+#             */
/*   Updated: 2023/04/24 17:16:01 by aruiz-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat():Animal()
{
	this->type = "Cat";
	this->br = new Brain();
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::~Cat()
{
	delete this->br;
	std::cout << "Cat destructor called" << std::endl;
}

Cat::Cat(const Cat& cat):Animal(cat)
{
	*this = cat;
	std::cout << "Cat copy constructor called" << std::endl;
}

void Cat::makeSound()const
{
	std::cout << "The " << this->type << " do MIAU " << std::endl;
}