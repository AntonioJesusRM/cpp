/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-mo <aruiz-mo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 17:22:04 by aruiz-mo          #+#    #+#             */
/*   Updated: 2023/05/06 09:29:10 by aruiz-mo         ###   ########.fr       */
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
	Cure(const Cure &cpy);
	virtual ~Cure();

	Cure& operator=(const Cure& cr);

	AMateria *clone(void) const;
	void use(ICharacter &target);
};

#endif