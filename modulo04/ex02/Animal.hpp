/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-mo <aruiz-mo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 10:43:09 by aruiz-mo          #+#    #+#             */
/*   Updated: 2023/04/25 12:06:49 by aruiz-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>
class Animal
{
protected:
	std::string type;
public:
	Animal();
	Animal(const Animal& an);
	Animal& operator=(const Animal& an);
	virtual ~Animal();
	virtual void makeSound()const = 0;
	std::string getType() const;
};

#endif