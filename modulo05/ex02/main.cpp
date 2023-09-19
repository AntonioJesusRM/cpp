/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-mo <aruiz-mo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 10:15:09 by aruiz-mo          #+#    #+#             */
/*   Updated: 2023/09/19 10:55:46 by aruiz-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	std::cout << std::endl << "\033[1;34mFail execute ShrubberyCreationForm dont signed.\033[0m" << std::endl;
	try
	{
		Bureaucrat bureaucrat("ash", 150);
        ShrubberyCreationForm form1("Shrubbery");
		bureaucrat.signForm(form1);
        bureaucrat.executeForm(form1);
	}catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << std::endl << "\033[1;34mFail execute RobotomyRequestForm dont have grade.\033[0m" << std::endl;
	try
	{
		Bureaucrat bureaucrat("ash", 70);
        RobotomyRequestForm form1("Robot");
		bureaucrat.signForm(form1);
        bureaucrat.executeForm(form1);
	}catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << std::endl << "\033[1;34mExecute PresidentialPardonForm successful.\033[0m" << std::endl;
	try
	{
		Bureaucrat bureaucrat("ash", 1);
        PresidentialPardonForm form1("Presidential");
		bureaucrat.signForm(form1);
        bureaucrat.executeForm(form1);
	}catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << std::endl << "\033[1;34mExecute ShrubberyCreationForm successful.\033[0m" << std::endl;
	try
	{
		Bureaucrat bureaucrat("ash", 20);
        ShrubberyCreationForm form1("Shrubbery");
		bureaucrat.signForm(form1);
        bureaucrat.executeForm(form1);
	}catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << std::endl << "\033[1;34mExecute RobotomyRequestForm successful.\033[0m" << std::endl;
	try
	{
		Bureaucrat bureaucrat("ash", 20);
        RobotomyRequestForm form1("Robot");
		bureaucrat.signForm(form1);
        bureaucrat.executeForm(form1);
	}catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (1);
}
