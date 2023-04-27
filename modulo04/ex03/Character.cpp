/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-mo <aruiz-mo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 19:12:04 by aruiz-mo          #+#    #+#             */
/*   Updated: 2023/04/27 19:27:22 by aruiz-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	this->name = "DefautlName";
	for (int i = 0; i < 4; i++)
    	this->inventory[i] = NULL;
	std::cout << "Character default constructor called" << std::endl;
}

Character::Character(const std::string name):name(name)
{
	for (int i = 0; i < 4; i++)
    	this->inventory[i] = NULL;
	std::cout << "Character name constructor called" << std::endl;
}

Character::Character(const Character &cpy)
{
	for (int i = 0; i < 4; i++)
		if (this->inventory[i] != NULL)
    		delete (this->inventory[i]);
	*this=cpy;
	std::cout << "Character copy constructor called" << std::endl;
}

Character &Character::operator=(const Character &chr)
{
	if (&chr != this)
	{
		this->name = chr.name;
		for (int i = 0; i < 4; i++)
			if (this->inventory[i] != NULL)
    			delete (this->inventory[i]);
		for(int i = 0; i < 4; i++)
			this->inventory[i] = chr.inventory[i];
	}
	return (*this);
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
		if (this->inventory[i] != NULL)
    		delete (this->inventory[i]);
	std::cout << "Character default destructor called" << std::endl;
}

std::string const &Character::getName(void)const
{
	return (this->name);
}

void Character::equip(AMateria* m)
{
	if (m == NULL)
	{
    	std::cout << "Cannot equip NULL Materia " << std::endl;
    	return ;
  	}
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i] == NULL)
		{
			this->inventory[i] = m;
			std::cout << "Materia " << m->getType() << " equip successfuly" << std::endl;
			return ;
		}
	}
	std::cout << "No space left to equip Materia" << std::endl;
}

void Character::unequip(int idx)
{
	if (idx > 3)
	{
		std::cout << "idx out of range" << std::endl;
		return;
	}
	if (this->inventory[idx] == NULL) 
		std::cout << "Slot in inventory not found" << std::endl;
	else
	{
		this->inventory[idx] = NULL;
		std::cout << "sucessfully unequiped slot " << idx << std::endl;
	}
}

void Character::use(int idx, ICharacter& target)
{
	if (idx > 3)
	{
		std::cout << "idx out of range" << std::endl;
		return;
	}
	if (this->inventory[idx] == NULL) 
		std::cout << "Slot in inventory not found" << std::endl;
	else
	{
		this->inventory[idx]->use(target);
		std::cout << this->getName() << " uses " << this->inventory[idx]->getType() << std::endl;
	}
}
