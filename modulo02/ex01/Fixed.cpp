/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-mo <aruiz-mo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 12:11:40 by aruiz-mo          #+#    #+#             */
/*   Updated: 2023/04/22 13:15:03 by aruiz-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed():_entero(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& f)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = f;
}

Fixed::Fixed(const int n):_entero(n << _numBit)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float f): _entero(std::roundf(f * (1 << _numBit)))
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed& Fixed::operator=( const Fixed &f )
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &f)
		this->_entero = f._entero;
	return *this;
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_entero);
}

void Fixed::setRawBits ( int const raw )
{
	this->_entero = raw;
}

int Fixed::toInt( void ) const
{
	return (this->_entero >> this->_numBit);
}

float   Fixed::toFloat( void ) const {
    return static_cast<float>( this-> _entero) / ( 1 << _numBit );
}

std::ostream & operator<<( std::ostream & o, Fixed const & i ) {
    o << i.toFloat();
    return o;
}