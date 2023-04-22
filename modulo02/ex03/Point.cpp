/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-mo <aruiz-mo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 15:38:48 by aruiz-mo          #+#    #+#             */
/*   Updated: 2023/04/22 15:50:34 by aruiz-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point():_x(0),_y(0)
{}

Point::~Point()
{}

Point::Point( const Point& p):_x(p._x),_y(p._y)
{
}

Point::Point(const float x, const float y):_x(x),_y(y)
{}

Point& Point::operator=( const Point &p )
{
	if (this != &p)
	{
		(Fixed)this->_x = p.getX();
		(Fixed)this->_y = p.getY();
	}
	return *this;
}

Fixed Point::getX( void ) const {
    return this->_x;
}

Fixed Point::getY( void ) const {
    return this->_y;
}