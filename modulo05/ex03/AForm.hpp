/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-mo <aruiz-mo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 10:59:37 by aruiz-mo          #+#    #+#             */
/*   Updated: 2023/09/19 11:36:39 by aruiz-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef AFORM_HPP
#define AFORM_HPP
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
private:
	const std::string	name;
	const int			gradeSign;
	const int			gradeExe;
	bool				isSign;
public:
	AForm(void);
	AForm(const AForm &cpy);
	AForm &operator=(const AForm &cpy);
	virtual ~AForm();

	AForm(const std::string name, const int gradeSign, const int gradeExe, bool isSign);

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
	class	FormIsNotSign: public std::exception
	{
		public:
			virtual const char *what() const throw()
			{
				return("Exception: The form is not signed");
			}
	};

	virtual void execute(Bureaucrat const & executor) const = 0;
};

std::ostream&   operator<<( std::ostream &o, const AForm &f);

#endif