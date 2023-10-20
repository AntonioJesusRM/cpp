/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-mo <aruiz-mo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 09:21:08 by aruiz-mo          #+#    #+#             */
/*   Updated: 2023/10/20 12:09:57 by aruiz-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
	if (argc < 2)
		std::cerr << "Error" << std::endl;
	else
	{
		std::string str;
		for (int i = 1; i < argc; ++i) {
			str += argv[i];
			if (i < argc - 1) {
				str += " ";
			}
		}
		try
		{
			PmergeMe pmg(str);
			pmg.NumberRep();
			std::cout << "Before: ";
			pmg.PrintList();
			std::cout << std::endl;
			clock_t totalTimeList = pmg.SortList();
			clock_t totalTimeVect = pmg.SortVect();
			std::cout << "After: ";
			pmg.PrintList();
			std::cout << std::endl;
			double dList = static_cast<double>(totalTimeList)/1000;
			double dVect = static_cast<double>(totalTimeVect)/1000;
			std::cout << std::fixed;
			std::cout << std::fixed << std::setprecision(3);
			std::cout << "Time to process a range of "<< pmg.size() << " elements with std::list: " << dList << " ms" <<std::endl;
			std::cout << "Time to process a range of "<< pmg.size() << " elements with std::vector: " << dVect << " ms" <<std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	return 0;
}