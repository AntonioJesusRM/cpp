/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-mo <aruiz-mo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 11:27:44 by aruiz-mo          #+#    #+#             */
/*   Updated: 2023/04/22 12:37:26 by aruiz-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class Fixed
{
private:
	int _entero;
	static int const _numBit = 8;
public:
	Fixed();
	~Fixed();
	Fixed( const Fixed& f);
	Fixed& operator=( const Fixed &f );
	int getRawBits( void ) const;
	void setRawBits ( int const raw );
};

#endif