/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-mo <aruiz-mo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 16:15:31 by aruiz-mo          #+#    #+#             */
/*   Updated: 2023/04/18 16:26:52 by aruiz-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string const str =  "HI THIS IS BRAIN";
	std::string const *stringPTR = &str;
	std::string const &stringREF = str;

	std::cout << "Direccion en memoria de str: " << &str << std::endl;
	std::cout << "Direccion en memoria de strPTR: " << &stringPTR << std::endl;
	std::cout << "Direccion en memoria de strREF: " << &stringREF << std::endl;

	std::cout << "Contenido de str: " <<str << std::endl;
	std::cout << "Contenido de strPTR: " <<*stringPTR << std::endl;
	std::cout << "Contenido de strREF: " <<stringREF << std::endl;
	return (0);
}