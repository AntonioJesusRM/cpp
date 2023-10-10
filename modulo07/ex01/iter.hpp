/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-mo <aruiz-mo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 10:41:39 by aruiz-mo          #+#    #+#             */
/*   Updated: 2023/10/10 11:09:39 by aruiz-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ITER_HPP
# define ITER_HPP
# include "iostream"

template <typename T>
void	iter(T *array, int len, void (*f)(T &elem))
{
	for (int i = 0; i < len; i++)
		f(array[i]);
}


template <typename T>
void	printVec(T &n)
{
	std::cout << n << " ";
}

#endif