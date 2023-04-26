/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-mo <aruiz-mo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 18:44:24 by aruiz-mo          #+#    #+#             */
/*   Updated: 2023/04/26 18:59:59 by aruiz-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef AMATERIA_HPP
#define AMATERIA_HPP
#include "ICharacter.hpp"
#include <iostream>

	class AMateria
	{
	protected:
		std::string type;
	public:
		AMateria(/* args */);
		AMateria(const AMateria& cpy);
		AMateria(std::string const & type);
		AMateria& operator=(const AMateria& am);
		~AMateria();
		std::string const & getType() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
	};
	
	AMateria::AMateria(/* args */)
	{
	}
	
	AMateria::~AMateria()
	{
	}
	
#endif