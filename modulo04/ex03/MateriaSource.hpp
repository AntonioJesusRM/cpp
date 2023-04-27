/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-mo <aruiz-mo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 17:32:06 by aruiz-mo          #+#    #+#             */
/*   Updated: 2023/04/27 17:58:18 by aruiz-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP
#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
private:
	AMateria *_materias[4];
public:
	MateriaSource();
	MateriaSource(const MateriaSource& cpy);
	MateriaSource& operator=(const MateriaSource& msrc);
	~MateriaSource();

	void learnMateria(AMateria *);
  	AMateria *createMateria(std::string const &type);
};

#endif