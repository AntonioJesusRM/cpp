/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-mo <aruiz-mo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 13:29:58 by aruiz-mo          #+#    #+#             */
/*   Updated: 2023/10/09 13:41:46 by aruiz-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
	Data data;
	Data *data2;
	
	uintptr_t ptr;

	data.nbr = 46;
	std::cout << "nbr	=	" << data.nbr << std::endl;
	
	ptr = Serializer::serialize(&data);
	std::cout << "ptr	= " << ptr << std::endl << std::endl;

	data2 = Serializer::deserialize(ptr);

	std::cout << "data	= " << data.nbr << std::endl;
	std::cout << "data2	= " << data2->nbr << std::endl;
	return (0);
}
