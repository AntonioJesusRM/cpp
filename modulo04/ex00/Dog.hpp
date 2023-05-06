/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-mo <aruiz-mo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 10:57:45 by aruiz-mo          #+#    #+#             */
/*   Updated: 2023/05/06 09:49:55 by aruiz-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"

class Dog:public Animal
{
public:
	Dog();
	Dog(const Dog &dog);
	~Dog();
	void makeSound()const;
};

#endif