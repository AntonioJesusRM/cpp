/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-mo <aruiz-mo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 11:02:20 by aruiz-mo          #+#    #+#             */
/*   Updated: 2023/04/24 17:16:15 by aruiz-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog():Animal()
{
	this->type = "Dog";
	this->br = new Brain();
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::~Dog()
{
	delete this->br;
	std::cout << "Dog destructor called" << std::endl;
}

Dog::Dog(const Dog& dog):Animal(dog)
{
	*this = dog;
	std::cout << "Dog copy constructor called" << std::endl;
}

void Dog::makeSound()const
{
	std::cout << "The " << this->type << " do GUAU" << std::endl;
}