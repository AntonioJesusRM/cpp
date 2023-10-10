/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-mo <aruiz-mo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 10:43:21 by aruiz-mo          #+#    #+#             */
/*   Updated: 2023/10/10 11:13:03 by aruiz-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void addOne(int &a)
{
	a++;
}

void subtractOne(int &a)
{
	a--;
}

int main()
{
	int b = 5;
	int a[b] = {1, 2, 3, 4, 5};
	
	std::cout << "Array: ";
	for (int i = 0; i < b; i++)
		std::cout << a[i];
	std::cout << std::endl;

	iter(a, b, addOne);
	std::cout << "Array after addOne: ";
	for (int i = 0; i < b; i++)
		std::cout << a[i];
	std::cout << std::endl;

	iter(a, b, subtractOne);
	std::cout << "Array after subtractOne: ";
	for (int i = 0; i < b; i++)
		std::cout << a[i];
	std::cout << std::endl;

	std::cout << "Array printVec: ";
	iter(a, b, printVec);
	std::cout << std::endl;

	return 0;
}