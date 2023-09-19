/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-mo <aruiz-mo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 11:01:46 by aruiz-mo          #+#    #+#             */
/*   Updated: 2023/09/19 11:25:07 by aruiz-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void)
{
	std::cout << "Use default constructor." << std::endl;
}

Intern::~Intern()
{
	std::cout << "Use destructor." << std::endl;
}

Intern::Intern(const Intern &cpy)
{
	*this = cpy;
	std::cout << "Use copy constructor." << std::endl;
}

Intern &Intern::operator=(const Intern &cpy)
{
	(void)cpy;
	return (*this);
}

AForm* Intern::makeForm(std::string namef, std::string target)
{
	std::string formNames[] = {
        "robotomy request",
        "presidential pardon",
        "shrubbery creation"
    };
    AForm* forms[] = {
        new RobotomyRequestForm( target ),
        new PresidentialPardonForm( target ),
        new ShrubberyCreationForm( target )
    };
    
    for ( int i(0); i < 3; i++ ) {
        if ( namef == formNames[i] ) {
            std::cout << "Intern creates " << namef << std::endl;
            return forms[i];
        }
    }
    std::cout << "Intern cannot create " << namef << " form" << std::endl;
    return NULL;
}
