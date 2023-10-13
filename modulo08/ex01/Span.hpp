/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-mo <aruiz-mo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 12:24:38 by aruiz-mo          #+#    #+#             */
/*   Updated: 2023/10/12 14:37:35 by aruiz-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef SPAN_HPP
# define SPAN_HPP
# include "iostream"
# include "vector"
# include "algorithm"

class Span
{
private:
	unsigned int n;
	std::vector<int> list;
public:
	Span(void);
	Span(const Span &src);
	~Span();

	Span &operator=(const Span &src);

	Span(unsigned int num);

	void addNumber(int n);
	int shortestSpan();
	int longestSpan();
	void addRange(int ini, int end);

	class shortVector: public std::exception
	{
		const char *what() const throw()
		{
			return ("Error: the vector does not have enough elements.");
		}
	};
		
	class fullVector: public std::exception
	{
		const char *what() const throw()
		{
			return ("Error: not enough space.");
		}
	};
};

#endif