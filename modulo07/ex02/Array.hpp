/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-mo <aruiz-mo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 12:02:55 by aruiz-mo          #+#    #+#             */
/*   Updated: 2023/10/10 14:51:16 by aruiz-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ARRAY_HPP
# define ARRAY_HPP
# include "iostream"
# include "cstdlib"

template<typename T>

class Array
{
private:
	T *data;
	unsigned int len;
public:
	Array(void);
	Array(unsigned int n);
	~Array();

	Array(const Array &src);
	Array &operator=(const Array &src);

	unsigned int	size() const;
	T	&operator[](const int i) const;

	class outOfRange: public std::exception
	{
		public:
			virtual const char *what() const throw()
			{
				return ("Array::exception: index: Out of range");
			}
	};
};

# include "Array.tpp"

#endif