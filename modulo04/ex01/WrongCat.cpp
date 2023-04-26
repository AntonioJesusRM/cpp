/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-mo <aruiz-mo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 11:02:20 by aruiz-mo          #+#    #+#             */
/*   Updated: 2023/04/24 11:55:50 by aruiz-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat():WrongAnimal()
{
	this->type = "WrongCat";
	std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& wcat):WrongAnimal(wcat)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
}

void WrongCat::makeSound()const
{
	std::cout << "The " << this->type << " do MIAU " << std::endl;
}