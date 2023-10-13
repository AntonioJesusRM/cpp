/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-mo <aruiz-mo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 12:19:28 by aruiz-mo          #+#    #+#             */
/*   Updated: 2023/10/13 07:20:12 by aruiz-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	std::cout << "	-----TEST-----" << std::endl;
	{
		try
		{
			Span mySp(3);
			mySp.addNumber(2);
			mySp.addNumber(6);
			mySp.addNumber(1);
			mySp.addNumber(50);
		}
		catch(std::exception & e)
		{
			std::cerr << e.what() << std::endl;
		}
		try
		{
			Span mySp(3);
			mySp.addNumber(2);
			std::cout << mySp.shortestSpan() << std::endl;
		}
		catch(std::exception & e)
		{
			std::cerr << e.what() << std::endl;
		}
		try
		{
			Span mySp(10100);
			mySp.addNumber(10000);
			mySp.addRange(1, 9999);
			mySp.addRange(1, 100);
			std::cout << mySp.shortestSpan() << std::endl;
			std::cout << mySp.longestSpan() << std::endl;
		}
		catch(std::exception & e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << "	-----TEST SUBJECT-----" << std::endl;
	{
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
}
