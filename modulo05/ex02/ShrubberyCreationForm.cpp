/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-mo <aruiz-mo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 17:37:00 by aruiz-mo          #+#    #+#             */
/*   Updated: 2023/09/19 10:54:04 by aruiz-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void):AForm("ShrubberyCreationForm", 145, 137, false), _target("Default")
{
	std::cout << "Use default constructor." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &cpy):AForm(cpy), _target(cpy._target)
{
	std::cout << "Use copy constructor." << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &cpy)
{
	(void)cpy;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "Use destructor." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std:: string _target):AForm("ShrubberyCreationForm", 145, 137, false), _target(_target)
{
	std::cout << "Use constructor." << std::endl;
}

void ShrubberyCreationForm::execute( const Bureaucrat& executor ) const
{
	if (this->getIsSign() == false)
		throw(FormIsNotSign());
	else if(this->getGradeExe() < executor.getGrade())
		throw(GradeTooLowException());
	else
	{
		std::string fileName = this->_target + "_shrubbery";
		std::ofstream outfile(fileName.c_str(), std::ios_base::app);
		if (!outfile)
		{
			std::cerr << "Can't create file" << std::endl;
		}
		else
		{
			outfile <<   "            # #### ####\n"
					"        ### \\/#|### |/####\n"
					"        ##\\/#/ \\||/##/_/##/_#\n"
					"       ###  \\/###|/ \\/ # ###\n"
					"    ##_\\_#\\_\\## | #/###_/_####\n"
					"    ## #### # \\ #| /  #### ##/##\n"
					"    __#_--###`  |{,###---###-~\n"
					"                \\ }{\n"
					"                }}{\n"
					"                }}{\n";
			outfile.close();
		}
	}
}