/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-mo <aruiz-mo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 18:12:55 by aruiz-mo          #+#    #+#             */
/*   Updated: 2023/09/19 10:29:26 by aruiz-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void):AForm("RobotomyRequestForm", 72, 45, false), _target("Default")
{
	std::cout << "Use default constructor." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &cpy):AForm(cpy), _target(cpy._target)
{
	std::cout << "Use copy constructor." << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &cpy)
{
	(void)cpy;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "Use destructor." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std:: string _target):AForm("RobotomyRequestForm", 72, 45, false), _target(_target)
{
	std::cout << "Use constructor." << std::endl;
}

void RobotomyRequestForm::execute( const Bureaucrat& executor ) const
{
	if (this->getIsSign() == false)
		throw(FormIsNotSign());
	else if(this->getGradeExe() < executor.getGrade())
		throw(GradeTooLowException());
	else
	{
		static int cont = 0;
		if (cont % 2 == 0)
			std::cout << "BZZT! " << _target << " has been robotomized!" << std::endl;
		else
			 std::cout << "Robotomy failed!" << std::endl;
		cont++;
	}
}