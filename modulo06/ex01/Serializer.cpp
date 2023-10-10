/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-mo <aruiz-mo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 13:30:01 by aruiz-mo          #+#    #+#             */
/*   Updated: 2023/10/09 13:37:12 by aruiz-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer:: Serializer(void)
{
}

Serializer::Serializer(Serializer const & src)
{
    *this = src;
}

Serializer::~Serializer()
{
}

Serializer&  Serializer::operator=(Serializer const &src)
{
	if (this != &src)
		*this = src;
    return (*this);
}

uintptr_t Serializer::serialize(Data *ptr)
{
	return(reinterpret_cast<uintptr_t>(ptr));
}

Data* Serializer::deserialize(uintptr_t raw)
{
	return(reinterpret_cast<Data*>(raw));
}
