/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-mo <aruiz-mo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 18:22:07 by aruiz-mo          #+#    #+#             */
/*   Updated: 2023/09/18 18:47:32 by aruiz-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
# include "AForm.hpp"

class PresidentialPardonForm: public AForm
{
private:
	const std::string _target;
public:
	PresidentialPardonForm(void);
	PresidentialPardonForm(const PresidentialPardonForm &cpy);
	PresidentialPardonForm &operator=(const PresidentialPardonForm &cpy);
	~PresidentialPardonForm();

	PresidentialPardonForm(std:: string _target);

	void execute( const Bureaucrat& executor ) const;
};

#endif