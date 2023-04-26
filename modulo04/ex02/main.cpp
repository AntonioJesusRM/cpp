/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-mo <aruiz-mo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 11:22:16 by aruiz-mo          #+#    #+#             */
/*   Updated: 2023/04/25 12:13:38 by aruiz-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main (void)
{
	const Animal	*meta[10];
	for (int i = 0; i < 10; i++)
	{
		std::cout << std::endl;
		if (i % 2)
			meta[i] = new Cat();
		else
			meta[i] = new Dog();
	}
	std::cout << std::endl;

	for (int i = 0; i < 10; i++)
	{
		std::cout << std::endl;
		meta[i]->makeSound();
	}

	for (int i = 0; i < 10; i++)
	{
		std::cout << std::endl;
		delete(meta[i]);
	}
}