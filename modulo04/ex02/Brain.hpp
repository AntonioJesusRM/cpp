/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-mo <aruiz-mo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 16:19:34 by aruiz-mo          #+#    #+#             */
/*   Updated: 2023/04/24 16:42:05 by aruiz-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <iostream>
class Brain
{
private:
	std::string ideas[100];
public:
	Brain();
	Brain(const Brain& br);
	Brain& operator=(const Brain& br);
	~Brain();
};

#endif