/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-mo <aruiz-mo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 17:18:34 by aruiz-mo          #+#    #+#             */
/*   Updated: 2023/04/27 18:48:26 by aruiz-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ICE_HPP
#define ICE_HPP
#include "AMateria.hpp"

class Ice: public AMateria
{
public:
	Ice();
	Ice(const Ice& cpy);
	Ice& operator=(const Ice& ice);
	~Ice();
	virtual AMateria *clone(void)const;
	virtual void use(ICharacter& target);
};

#endif