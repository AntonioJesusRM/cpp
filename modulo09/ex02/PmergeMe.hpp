/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-mo <aruiz-mo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 09:21:37 by aruiz-mo          #+#    #+#             */
/*   Updated: 2023/10/20 12:10:55 by aruiz-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef PMERGEME_HPP
#define PMERGEME_HPP
# include "iostream"
# include "vector"
# include "list"
# include "algorithm"
# include "string"
# include "sstream"
# include "iomanip"

class PmergeMe
{
private:
	std::vector<int> myVect;
	std::list<int> myList;
public:
	PmergeMe(void);
	PmergeMe(PmergeMe &src);
	~PmergeMe();

	PmergeMe &operator=(PmergeMe &src);

	PmergeMe(std::string str);
	void PrintList();
	void NumberRep();
	int	size();
	clock_t SortList();
	clock_t SortVect();

	class BadArgument: public std::exception
	{
		const char *what() const throw()
		{
			return ("Error.");
		}
	};
		
};

#endif