/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   remplace.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-mo <aruiz-mo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 15:36:43 by aruiz-mo          #+#    #+#             */
/*   Updated: 2023/04/19 16:38:21 by aruiz-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef REMPLACE_HPP
#define REMPLACE_HPP
#include <iostream>

class remplace
{
public:
	remplace(void);
	~remplace();
	std::string ft_rempstr(std::string ini, std::string s1, std::string s2);
};

#endif