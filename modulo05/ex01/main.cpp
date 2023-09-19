/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-mo <aruiz-mo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 09:23:47 by aruiz-mo          #+#    #+#             */
/*   Updated: 2023/09/19 10:39:59 by aruiz-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	std::cout << std::endl << "\033[1;34mTry create a Form with grade sign 0.\033[0m" << std::endl;
	try
	{
		Form a("f1", 0, 50, false);
		std::cout << a.getName() << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	std::cout << std::endl << "\033[1;34mTry create a Form with grade exec 151.\033[0m" << std::endl;
	try
	{
		Form a("f1", 50, 151, false);
		std::cout << a.getName() << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl << "\033[1;34mTry fail form signed.\033[0m" << std::endl;
	try {
        Bureaucrat bureaucrat("ash",15);
        Form form("formName", 12, 50, false);

        bureaucrat.signForm(form);

        std::cout << form << std::endl;
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

	std::cout << std::endl << "\033[1;34mTry successful form signed.\033[0m" << std::endl;
	try {
        Bureaucrat bureaucrat("ash",11);
        Form form("formName", 12, 50, false);

        bureaucrat.signForm(form);

        std::cout << form << std::endl;
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
}
