/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-mo <aruiz-mo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 13:30:03 by aruiz-mo          #+#    #+#             */
/*   Updated: 2023/10/09 13:47:22 by aruiz-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include "iostream"
# include "stdint.h"

struct Data
{
	int nbr;
};

class Serializer
{
	private:
		Serializer();
		Serializer(Serializer const& src);
		~Serializer();
		
		Serializer& operator=(Serializer const& src);

	public:
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};

#endif