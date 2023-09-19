/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-mo <aruiz-mo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 18:13:04 by aruiz-mo          #+#    #+#             */
/*   Updated: 2023/09/19 10:29:29 by aruiz-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include "AForm.hpp"

class RobotomyRequestForm: public AForm
{
private:
	const std::string _target;
public:
	RobotomyRequestForm(void);
	RobotomyRequestForm(const RobotomyRequestForm &cpy);
	RobotomyRequestForm &operator=(const RobotomyRequestForm &cpy);
	~RobotomyRequestForm();

	RobotomyRequestForm(std:: string _target);

	void execute( const Bureaucrat& executor ) const;
};

#endif