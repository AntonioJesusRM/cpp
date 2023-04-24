/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-mo <aruiz-mo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 16:36:43 by aruiz-mo          #+#    #+#             */
/*   Updated: 2023/04/19 18:09:26 by aruiz-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv)
{
	Harl h;

	if (argc != 2)
	{
		std::cout << "El numero de parametros introducido es incorrecto." << std::endl;
		return (1);
	}
	std::string valor = argv[1];
	if (valor == "DEBUG" || valor == "INFO" || valor == "WARNING" || valor == "ERROR")
	{
		switch (valor[0])
		{
		case 'D':
			std::cout << "[ DEBUG ]" << std::endl;
			h.complain("debug");
			std::cout << std::endl << "[ INFO ]" << std::endl;
			h.complain("info");
			std::cout << std::endl << "[ WARNING ]" << std::endl;
			h.complain("warning");
			std::cout << std::endl << "[ ERROR ]" << std::endl;
			h.complain("error");
			std::cout << std::endl;
			break;
		case 'I':
			std::cout << "[ INFO ]" << std::endl;
			h.complain("info");
			std::cout << std::endl << "[ WARNING ]" << std::endl;
			h.complain("warning");
			std::cout << std::endl << "[ ERROR ]" << std::endl;
			h.complain("error");
			std::cout << std::endl;
			break;
		case 'W':
			std::cout << "[ WARNING ]" << std::endl;
			h.complain("warning");
			std::cout << std::endl << "[ ERROR ]" << std::endl;
			h.complain("error");
			std::cout << std::endl;
			break;
		case 'E':
			std::cout << "[ ERROR ]" << std::endl;
			h.complain("error");
			std::cout << std::endl;
			break;
		}
	}
	else
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	return (0);
}