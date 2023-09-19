/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-mo <aruiz-mo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 10:59:37 by aruiz-mo          #+#    #+#             */
/*   Updated: 2023/09/19 10:38:20 by aruiz-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef FORM_HPP
#define FORM_HPP
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	const std::string	name;
	const int			gradeSign;
	const int			gradeExe;
	bool				isSign;
public:
	Form(void);
	Form(const Form &cpy);
	Form &operator=(const Form &cpy);
	~Form();

	Form(const std::string name, const int gradeSign, const int gradeExe, bool isSign);

	const std::string getName(void)const;
	int getGradeSign(void)const;
	int getGradeExe(void)const;
	bool getIsSign(void)const;

	void beSigned(Bureaucrat b);

	class	GradeTooHighException: public std::exception
	{
		public:
			virtual const char *what() const throw()
			{
				return ("Exception: Grade is to high");
			}
	};
	class	GradeTooLowException: public std::exception
	{
		public:
			virtual const char *what() const throw()
			{
				return("Exception: Grade is to low");
			}
	};
};

std::ostream&   operator<<( std::ostream &o, const Form &f);

#endif