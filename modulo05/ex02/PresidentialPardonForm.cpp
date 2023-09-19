/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-mo <aruiz-mo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 18:22:00 by aruiz-mo          #+#    #+#             */
/*   Updated: 2023/09/19 10:30:58 by aruiz-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void):AForm("PresidentialPardonForm", 25, 5, false), _target("Default")
{
	std::cout << "Use default constructor." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &cpy):AForm(cpy), _target(cpy._target)
{
	std::cout << "Use copy constructor." << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &cpy)
{
	(void)cpy;
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "Use destructor." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std:: string _target):AForm("PresidentialPardonForm", 25, 5, false), _target(_target)
{
	std::cout << "Use constructor." << std::endl;
}

void PresidentialPardonForm::execute( const Bureaucrat& executor ) const
{
	if (this->getIsSign() == false)
		throw(FormIsNotSign());
	else if(this->getGradeExe() < executor.getGrade())
		throw(GradeTooLowException());
	else
		std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}
