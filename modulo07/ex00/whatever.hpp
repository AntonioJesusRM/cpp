/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-mo <aruiz-mo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 10:22:50 by aruiz-mo          #+#    #+#             */
/*   Updated: 2023/10/10 10:32:00 by aruiz-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef WHATEVER_HPP
# define WHATEVER_HPP
# include "iostream"

template <typename T>
void	swap(T &a, T &b)
{
	T temp = a;
	a = b;
	b = temp;
}

template <typename T>
T	min(T &a, T &b)
{
	return ((a < b) ? a : b);
}

template <typename T>
T	max(T &a, T &b)
{
	return ((a > b) ? a : b);
}

#endif