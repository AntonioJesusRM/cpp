/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-mo <aruiz-mo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 17:57:06 by aruiz-mo          #+#    #+#             */
/*   Updated: 2023/04/27 19:06:49 by aruiz-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for(int i = 0; i < 4; i++)
		this->_materias[i] = NULL;
	std::cout << "MateriaSource default constructor called" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource& cpy)
{
	*this = cpy;
	std::cout << "MateriaSource copy constructor called" << std::endl;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& msrc)
{
	if (&msrc != this)
		for(int i = 0; i < 4; i++)
			this->_materias[i] = msrc._materias[i];
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource default destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		if (this->_materias[i] != NULL)
			delete this->_materias[i];
}

void MateriaSource::learnMateria(AMateria * ama)
{
	if (ama == NULL)
	{
    	std::cout << "Cannot learn NULL Materia " << std::endl;
    	return;
  	}
	for (int i = 0; i < 4; i++)
	{
		if (this->_materias[i] == NULL)
		{
			this->_materias[i] = ama;
			std::cout << "Materia " << ama->getType() << " learned successfuly" << std::endl;
			return ;
		}
	}
	std::cout << "No space left to learn Materia" << std::endl;
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	int ctrl;

	ctrl = -1;
	for (int i = 0; i < 4; i++)
	{
		if (this->_materias[i] && this->_materias[i]->getType() == type)
			ctrl = i;
	}
	if (ctrl != -1)
		return this->_materias[ctrl]->clone();
	else
		return (0);
}
