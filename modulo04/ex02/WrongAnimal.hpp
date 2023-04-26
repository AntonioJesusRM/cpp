/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-mo <aruiz-mo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 11:48:30 by aruiz-mo          #+#    #+#             */
/*   Updated: 2023/04/24 12:15:49 by aruiz-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include <iostream>
class WrongAnimal
{
protected:
	std::string type;
public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal& wAn);
	WrongAnimal& operator=(const WrongAnimal& an);
	virtual ~WrongAnimal();
	void makeSound()const;
	std::string getType() const;
};

#endif