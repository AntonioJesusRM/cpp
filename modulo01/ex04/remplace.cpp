/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   remplace.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-mo <aruiz-mo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 15:36:46 by aruiz-mo          #+#    #+#             */
/*   Updated: 2023/04/19 16:22:16 by aruiz-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "remplace.hpp"

remplace::remplace(void)
{}

remplace::~remplace()
{}

std::string remplace::ft_rempstr(std::string data, std::string s1, std::string s2)
{
	if (s1.empty() || s2.empty())
	{
		std::cerr << "Los strings a cambiar no pueden estar vacios." << std::endl;
		return (data);
	}
	size_t  index = data.find(s1);
	while (index != std::string::npos)
	{
		data.erase(index, s1.size());
        data.insert(index, s2);
        index = data.find(s1);
	}
	return (data);
}