/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-mo <aruiz-mo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 17:37:04 by aruiz-mo          #+#    #+#             */
/*   Updated: 2023/09/19 10:02:33 by aruiz-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
# include "AForm.hpp"
# include <fstream>

class ShrubberyCreationForm: public AForm
{
private:
	const std::string _target;
public:
	ShrubberyCreationForm(void);
	ShrubberyCreationForm(const ShrubberyCreationForm &cpy);
	ShrubberyCreationForm &operator=(const ShrubberyCreationForm &cpy);
	~ShrubberyCreationForm();

	ShrubberyCreationForm(std:: string _target);

	void execute( const Bureaucrat& executor ) const;
};

#endif