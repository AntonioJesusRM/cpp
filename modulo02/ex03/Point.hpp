/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-mo <aruiz-mo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 15:35:41 by aruiz-mo          #+#    #+#             */
/*   Updated: 2023/04/22 15:54:12 by aruiz-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef POINT_HPP
#define POINT_HPP
#include "Fixed.hpp"

class Point
{
private:
	Fixed const _x;
	Fixed const _y;
public:
	Point();
	~Point();
	Point( const Point& p);
	Point(const float x, const float y);
	Point& operator=( const Point &p );
	Fixed getX( void ) const;
	Fixed getY( void ) const;
};

bool bsp( Point const a, Point const b, Point const c, Point const p );

#endif