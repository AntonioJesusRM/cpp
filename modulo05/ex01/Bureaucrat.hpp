/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-mo <aruiz-mo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 09:29:06 by aruiz-mo          #+#    #+#             */
/*   Updated: 2023/09/19 10:39:43 by aruiz-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include "iostream"
# include "Form.hpp"

class Form;

class Bureaucrat
{
private:
	const std::string	name;
	int					grade;
public:
	Bureaucrat(void);
	Bureaucrat(const Bureaucrat &cpy);
	Bureaucrat &operator=(const Bureaucrat &cpy);
	~Bureaucrat();

	Bureaucrat(const std::string name, int grade);

	const std::string getName(void)const;
	int getGrade(void)const;

	Bureaucrat upGrade (void);
	Bureaucrat downGrade (void);

	void signForm(Form &f);

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

std::ostream & operator<<(std::ostream &os, const Bureaucrat &b);

#endif
