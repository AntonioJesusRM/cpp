/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-mo <aruiz-mo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 12:30:21 by aruiz-mo          #+#    #+#             */
/*   Updated: 2023/10/13 07:19:22 by aruiz-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void):n(0)
{
}

Span::Span(const Span &src)
{
	*this = src;
}

Span::~Span()
{
}

Span& Span::operator=(const Span &src)
{
	if(&src != this)
	{
		this->n = src.n;
		this->list = src.list;
	}
	return (*this);
}

Span::Span(unsigned int len):n(len)
{
}

void Span::addNumber(int num)
{
	if (this->list.size() < this->n)
		this->list.push_back(num);
	else
		throw fullVector();
}

int Span::shortestSpan()
{
	if (this->list.size() < 2)
		throw shortVector();
	else
	{
		std::vector<int> newList(this->list);
		std::sort(newList.begin(), newList.end());
		unsigned int sh = newList[1] - newList[0];
		for(size_t i = 0; i < newList.size(); i++)
		{
			if ((unsigned int)(newList[i + 1] - newList[i]) < sh)
				sh = newList[i + 1] - newList[i];
		}
		return (sh);
	}
	return (0);
}

int Span::longestSpan()
{
	if (this->list.size() < 2)
		throw shortVector();
	else
	{
		int maximum = *std::max_element(this->list.begin(), this->list.end());
		int minimum = *std::min_element(this->list.begin(), this->list.end());
		return (maximum - minimum);
	}
	return (0);
}

void Span::addRange(int ini, int end)
{
	int min = ini;
	int max = end;

	if (ini > end)
	{
		min = end;
		max = ini;
	}
	int len = max - min;
	if (this->list.size() + len < this->n)
		for(int i = 0; i <= len; i++)
			this->list.push_back(min + i);
	else
		throw fullVector();
}