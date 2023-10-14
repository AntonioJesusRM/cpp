/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-mo <aruiz-mo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 15:55:08 by aruiz-mo          #+#    #+#             */
/*   Updated: 2023/10/14 09:04:03 by aruiz-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef RPN_HPP
# define RPN_HPP
# include "iostream"
# include "algorithm"
# include "queue"
# include "string"
# include "sstream"

class RPN
{
private:
	std::queue<double>	numbers;
public:
	RPN(void);
	RPN(RPN &src);
	~RPN();

	RPN &operator=(RPN &src);

	RPN(std::string str);
};

#endif