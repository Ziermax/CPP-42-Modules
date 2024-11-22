/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelazqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 21:22:06 by mvelazqu          #+#    #+#             */
/*   Updated: 2024/11/22 13:52:46 by mvelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>

Fixed	areaTriangle(Point const a, Point const b, Point const c)
{
	Fixed	area;

	area = Fixed(0.5f) * Fixed::fpabs(
			a.getX() * (b.getY() - c.getY())
			+ b.getX() * (c.getY() - a.getY())
			+ c.getX() * (a.getY() - b.getY()));
	return (area);
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed	fullArea;
	Fixed	abpArea;
	Fixed	bcpArea;
	Fixed	capArea;
	
	fullArea = areaTriangle(a, b, c);
	abpArea = areaTriangle(a, b, point);
	bcpArea = areaTriangle(b, c, point);
	capArea = areaTriangle(c, a, point);
	if (abpArea == 0 || bcpArea == 0 || capArea == 0
		|| fullArea != (abpArea + bcpArea + capArea))
		return (false);
	return (true);
}
