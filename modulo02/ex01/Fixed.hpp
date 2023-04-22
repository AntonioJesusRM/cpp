/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-mo <aruiz-mo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 12:10:12 by aruiz-mo          #+#    #+#             */
/*   Updated: 2023/04/22 13:03:36 by aruiz-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <cmath>

class Fixed
{
private:
	int _entero;
	static int const _numBit = 8;
public:
	Fixed();
	~Fixed();
	Fixed( const Fixed& f);
	Fixed(const int n);
	Fixed(const float f);
	Fixed& operator=( const Fixed &f );
	float toFloat( void ) const;
	int toInt( void ) const;
	int getRawBits( void ) const;
	void setRawBits ( int const raw );
};

std::ostream & operator<<( std::ostream & o, Fixed const & i );

#endif