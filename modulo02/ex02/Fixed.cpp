/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-mo <aruiz-mo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 12:11:40 by aruiz-mo          #+#    #+#             */
/*   Updated: 2023/04/22 15:06:28 by aruiz-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed():_entero(0)
{
}

Fixed::~Fixed()
{
}

Fixed::Fixed(const Fixed& f)
{
	*this = f;
}

Fixed::Fixed(const int n):_entero(n << _numBit)
{
}

Fixed::Fixed(const float f): _entero(std::roundf(f * (1 << _numBit)))
{
}

Fixed& Fixed::operator=( const Fixed &f )
{
	if (this != &f)
		this->_entero = f._entero;
	return *this;
}

int Fixed::getRawBits( void ) const
{
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

//Comparaciones

bool Fixed::operator>( const Fixed &f ) const
{
	return (this->_entero > f._entero);
}

bool Fixed::operator<( const Fixed &f ) const
{
	return (this->_entero < f._entero);
}

bool Fixed::operator>=( const Fixed &f ) const
{
	return (this->_entero >= f._entero);
}

bool Fixed::operator<=( const Fixed &f ) const
{
	return (this->_entero <= f._entero );
}

bool Fixed::operator==( const Fixed &f ) const
{
	return (this->_entero == f._entero);
}

bool Fixed::operator!=( const Fixed &f ) const
{
	return (this->_entero != f._entero);
}

//Operaciones Aritmeticas

Fixed Fixed::operator+( const Fixed &f )
{
	return(Fixed(this->toFloat() + f.toFloat()));
}

Fixed Fixed::operator-( const Fixed &f )
{
	return(Fixed(this->toFloat() - f.toFloat()));
}

Fixed Fixed::operator*( const Fixed &f )
{
	return(Fixed(this->toFloat() * f.toFloat()));
}

Fixed Fixed::operator/( const Fixed &f )
{
	return(Fixed(this->toFloat() / f.toFloat()));
}

//Operaciones incremento
Fixed& Fixed::operator++( void )
{
	++this->_entero;
	return (*this);
}

Fixed& Fixed::operator--( void )
{
	--this->_entero;
	return (*this);
}

Fixed Fixed::operator++( int d)
{
	Fixed tmp (*this);
	tmp._entero = this->_entero++;
	return (tmp);
}

Fixed Fixed::operator--( int d)
{
	Fixed tmp (*this);
	tmp._entero = this->_entero--;
	return (tmp);
}

//min y max
Fixed& Fixed::min( Fixed &a, Fixed &b )
{
	if (a._entero < b._entero)
		return (a);
	return (b);
}

const Fixed& Fixed::min( const Fixed &a, const Fixed &b )
{
	if (a._entero < b._entero)
		return (a);
	return (b);
}

Fixed& Fixed::max( Fixed &a, Fixed &b )
{
	if (a._entero > b._entero)
		return (a);
	return (b);
}

const Fixed& Fixed::max( const Fixed &a, const Fixed &b )
{
	if (a._entero > b._entero)
		return (a);
	return (b);
}
