/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-mo <aruiz-mo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 18:44:24 by aruiz-mo          #+#    #+#             */
/*   Updated: 2023/05/06 09:37:03 by aruiz-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef AMATERIA_HPP
#define AMATERIA_HPP
#include <iostream>
class AMateria;
#include "ICharacter.hpp"

class AMateria
{
protected:
	std::string type;
public:
	AMateria(std::string const & type);
	virtual ~AMateria();

	std::string const &getType() const;
	virtual AMateria *clone(void) const = 0;
	virtual void use(ICharacter& target);
};

#endif