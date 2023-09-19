/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-mo <aruiz-mo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 09:23:47 by aruiz-mo          #+#    #+#             */
/*   Updated: 2023/09/13 16:26:47 by aruiz-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	std::cout << "\033[1;34mTry create a Bureaucrat with grade 0.\033[0m" << std::endl;
	try
	{
		Bureaucrat a("John", 0);
		std::cout << a.getName() << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl << "\033[1;34mTry create a Bureaucrat with grade 151.\033[0m" << std::endl;
	try
	{
		Bureaucrat a("John", 151);
		std::cout << a.getName() << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl << "\033[1;34mTry create a Bureaucrat with grade 1 and up grade.\033[0m" << std::endl;
	try
	{
		Bureaucrat a("John", 1);
		std::cout << a;
		a.upGrade();
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	std::cout << std::endl << "\033[1;34mTry create a Bureaucrat with grade 150 and down grade.\033[0m" << std::endl;
	try
	{
		Bureaucrat a("John", 150);
		std::cout << a;
		a.downGrade();
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl << "\033[1;34mCreate a Bureaucrat a and b.\033[0m" << std::endl;
	try
	{
		Bureaucrat a("John", 100);
		Bureaucrat b("Leon", 50);
		std::cout << a;
		std::cout << b;
		a.downGrade();
		b.upGrade();
		std::cout << a;
		std::cout << b;
		a = b;
		std::cout << a;
		std::cout << b;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
}
