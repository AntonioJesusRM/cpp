/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-mo <aruiz-mo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 11:26:40 by aruiz-mo          #+#    #+#             */
/*   Updated: 2023/10/12 12:17:12 by aruiz-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include "iostream"
# include "algorithm"
# include "vector"

class notFoundValue: public std::exception
{
public:
	const char *what() const throw()
	{
		return ("Error: Value not found");
	}
};

template<typename T>
typename T::iterator easyfind(T &vec, int n)
{
	typename T::iterator it = find(vec.begin(), vec.end(), n);
	if (*it != n && it == vec.end())
		throw (notFoundValue());
	return (it);
}

#endif
