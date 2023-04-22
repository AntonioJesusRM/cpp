/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-mo <aruiz-mo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 15:51:03 by aruiz-mo          #+#    #+#             */
/*   Updated: 2023/04/22 16:23:08 by aruiz-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static Fixed abs (Fixed p)
{
	if (p < 0)
		return (p * -1);
	return (p);
}

static Fixed area(Point const a, Point const b, Point const c)
{
	return (((a.getX() * (b.getY() - c.getY())) + 
			(b.getX() * (c.getY() - a.getY())) +
			(c.getX() * (a.getY() - b.getY())))/2);
}

bool bsp(Point const a, Point const b, Point const c, Point const p)
{
	Fixed areaABC = abs(area(a,b,c));
	Fixed areaPBC = abs(area(p,a,b));
	Fixed areaPAC = abs(area(p,b,c));
	Fixed areaPAB = abs(area(p,c,a));
	return (areaABC == (areaPBC + areaPAC + areaPAB));
}