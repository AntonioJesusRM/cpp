/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-mo <aruiz-mo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 17:22:04 by aruiz-mo          #+#    #+#             */
/*   Updated: 2023/04/27 17:28:42 by aruiz-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef CURE_HPP
#define CURE_HPP
#include "AMateria.hpp"

class Cure: public AMateria
{
public:
	Cure();
	Cure(const Cure& cpy);
	Cure& operator=(const Cure& cr);
	~Cure();
};

Cure::Cure()
{
	this->type = "cure";
}

Cure::~Cure()
{
}


#endif