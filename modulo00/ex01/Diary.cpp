/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Diary.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-mo <aruiz-mo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 11:48:43 by aruiz-mo          #+#    #+#             */
/*   Updated: 2023/02/28 16:28:34 by aruiz-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

int main(void)
{
	PhoneBook book;
	std::string input = " ";

	while (input.compare("EXIT"))
	{
		std::cout << "Ingrese uno de los siguientes comandos: ADD, SEARCH y EXIT: ";
		std::cin >> input;
		if (input.compare("ADD") == 0)
			book.AddContact();
		else if (input.compare("SEARCH") == 0)
			book.Search();
		else if (input.compare("EXIT") != 0)
			std::cout << "Comando \"" << input << "\" no reconocido" << std::endl;
	}
	return (0);
}
