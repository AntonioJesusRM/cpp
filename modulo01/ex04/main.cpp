/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-mo <aruiz-mo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 15:24:59 by aruiz-mo          #+#    #+#             */
/*   Updated: 2023/04/19 16:26:14 by aruiz-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "remplace.hpp"
#include <fstream>

int main(int argc,char **argv)
{
	remplace remp;
	if (argc != 4)
	{
		std::cout << "Error: Numero de argumentos invalido" << std::endl;
		return (1);
	}
	std::ifstream archivo(argv[1]);
	if (!archivo.is_open())
	{
		std::cout << "Error: Al abrir el archivo" << std::endl;
        return 1;
	}
	std::string result;
	std::string s1 = argv[2];
	std::string s2 = argv[3];

	std::getline(archivo, result, '\0');
	archivo.close();

	result = remp.ft_rempstr(result, s1, s2);
	std::ofstream out(argv[1] + std::string(".remplace"));
	if (!out.is_open())
	{
		std::cout << "Error: Al crear el archivo de salida" << std::endl;
        return 1;
	}
	out << result;
	out.close();
	return 0;
}