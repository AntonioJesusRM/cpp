/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-mo <aruiz-mo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 11:26:11 by aruiz-mo          #+#    #+#             */
/*   Updated: 2023/10/12 13:11:38 by aruiz-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
	std::vector<int> list;
	std::vector<int>::iterator n;
	list.push_back(80);
    list.push_back(3);
    list.push_back(90);
    list.push_back(210);
    list.push_back(15);

	try {
		n = easyfind(list, 25);
		std::cout << "Position: " << (n - list.begin()) << std::endl;
	}
	catch(std::exception & e) {
        std::cerr << e.what() << std::endl;
    }
	
	try {
		n = easyfind(list, 3);
		std::cout << "Position: " << (n - list.begin()) << std::endl;
	}
	catch(std::exception & e) {
        std::cerr << e.what() << std::endl;
    }
}