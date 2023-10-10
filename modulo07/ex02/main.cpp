/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-mo <aruiz-mo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 10:40:28 by aruiz-mo          #+#    #+#             */
/*   Updated: 2023/10/10 14:58:25 by aruiz-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
    srand(time(NULL));
	try
	{
		Array<int> listInt(30);
		for (unsigned int i = 0; i < listInt.size(); i++)
			listInt[i] = rand() % listInt.size();
		for (unsigned int i = 0; i < listInt.size(); i++)
			std::cout << listInt[i] << " ";
		std::cout << std::endl << "Array size: " << listInt.size() << std::endl;
		std::cout << "Test of Out of Range...\n" << listInt[30] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
