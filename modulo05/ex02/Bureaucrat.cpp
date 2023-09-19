/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-mo <aruiz-mo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 09:28:55 by aruiz-mo          #+#    #+#             */
/*   Updated: 2023/09/19 09:09:54 by aruiz-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void):name("default"),grade(150)
{
	std::cout << "Use default constructor." << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &cpy):name(cpy.name)
{
	std::cout << "Use copy constructor." << std::endl;
	*this = cpy;
}
Bureaucrat &Bureaucrat::operator=(const Bureaucrat &cpy)
{
	if (this != &cpy)
		this->grade = cpy.grade;
	return (*this);
}
Bureaucrat::~Bureaucrat()
{
	std::cout << "Use destructor." << std::endl;
}

Bureaucrat::Bureaucrat(const std::string nm, int gr):name(nm)
{
	if (gr < 1)
		throw (GradeTooHighException());
	else if (gr > 150)
		throw (GradeTooLowException());
	else
		this->grade = gr;
	std::cout << "Use constructor." << std::endl;
}

const std::string Bureaucrat::getName(void)const
{
	return (this->name);
}

int Bureaucrat::getGrade(void)const
{
	return (this->grade);
}

Bureaucrat Bureaucrat::upGrade (void)
{
	if (this->grade <= 1)
		throw (GradeTooHighException());
	else
		this->grade--;
	return (*this);
}

Bureaucrat Bureaucrat::downGrade (void)
{
	if (this->grade >= 150)
		throw (GradeTooLowException());
	else
		this->grade++;
	return (*this);
}

void Bureaucrat::signForm(AForm &f)
{
	try {
        f.beSigned( *this );
        std::cout << this->getName() << " signed " << f.getName() << std::endl;
    } catch (AForm::GradeTooLowException &e) {
        std::cout << this->getName() << " coulnd't sign " << f.getName() << " because " << e.what() << std::endl;
    }
}

void Bureaucrat::executeForm( const AForm &form) const
{
	try {
        form.execute( *this );
		std::cout << this->getName() << " executed " << form.getName() << std::endl;
    } catch ( std::exception& e ) {
        std::cout << this->getName() << " couldn't execute " << form.getName() << " because " << e.what() << std::endl;
    }
}
std::ostream &operator<<(std::ostream &os, const Bureaucrat &b)
{
	return (os << b.getName() << ", bureaucrat grade " << b.getGrade() << std::endl);
}
