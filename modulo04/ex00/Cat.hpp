/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-mo <aruiz-mo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 10:57:45 by aruiz-mo          #+#    #+#             */
/*   Updated: 2023/05/06 09:50:02 by aruiz-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"

class Cat:public Animal
{
public:
	Cat();
	Cat(const Cat &cat);
	~Cat();
	void makeSound()const;
};

#endif