/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-mo <aruiz-mo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 10:59:48 by aruiz-mo          #+#    #+#             */
/*   Updated: 2023/09/19 08:14:52 by aruiz-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(void):name("Default"), gradeSign(150), gradeExe(150), isSign(false)
{
	std::cout << "Use default constructor." << std::endl;
}

AForm::AForm(const AForm &cpy):name(cpy.name),gradeSign(cpy.getGradeSign()),gradeExe(cpy.getGradeExe()),isSign(cpy.isSign)
{
	std::cout << "Use copy constructor." << std::endl;
}

AForm &AForm::operator=(const AForm &cpy)
{
	if (this != &cpy)
		this->isSign = cpy.isSign;
	return (*this);
}

AForm::~AForm()
{
	std::cout << "Use destructor." << std::endl;
}

AForm::AForm(const std::string name, const int gradeSign, const int gradeExe, bool isSign):name(name),gradeSign(gradeSign),gradeExe(gradeExe)
{
	if (gradeSign > 150 || gradeExe > 150)
		throw (GradeTooLowException());
	else if (gradeSign < 1 || gradeExe < 1)
		throw (GradeTooHighException());
	else
		this->isSign = isSign;
	std::cout << "Use constructor." << std::endl;
}

const std::string AForm::getName(void)const
{
	return(this->name);
}

int AForm::getGradeSign(void)const
{
	return(this->gradeSign);
}

int AForm::getGradeExe(void)const
{
	return(this->gradeExe);
}

bool AForm::getIsSign(void)const
{
	return(this->isSign);
}

void AForm::beSigned(Bureaucrat b)
{
	if (b.getGrade() > this->getGradeSign())
		throw (GradeTooLowException());
	this->isSign = true;
}
std::ostream &operator<<(std::ostream &os, const AForm &f)
{
	os << std::endl << "	----- FORM INFO -----" << std::endl;
	os << "Form name: " << f.getName() << std::endl;
	os << "Grade sign: " << f.getGradeSign() << std::endl;
	os << "Grade execute: " << f.getGradeExe() << std::endl;
	os << "Form sign: " << f.getIsSign() << std::endl;
	return (os);
}