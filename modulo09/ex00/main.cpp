/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-mo <aruiz-mo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 09:03:18 by aruiz-mo          #+#    #+#             */
/*   Updated: 2023/10/13 12:52:16 by aruiz-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
	if (argc > 2)
		std::cerr << "Error: Bad number arguments." << std::endl;
	else if (argc < 2)
		std::cerr << "Error: could not open file." << std::endl;
	else
	{
		std::ifstream srcFile(argv[1]);
		if (srcFile.is_open())
		{
			std::ifstream csvFile("data.csv");
			if (csvFile.is_open())
				BitcoinExchange myBit(srcFile, csvFile);
			else
        		std::cerr << "Error: could not open file csv." << std::endl;
			csvFile.close();
			srcFile.close();
    	}
		else
        	std::cerr << "Error: could not open file." << std::endl;
	}

    return 0;
}