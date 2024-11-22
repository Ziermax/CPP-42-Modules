/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelazqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 21:01:06 by mvelazqu          #+#    #+#             */
/*   Updated: 2024/11/22 13:01:53 by mvelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>

Point::~Point(void)
{
	return ;
}

Point::Point(void): _x(0), _y(0)
{
	return ;
}

Point::Point(Fixed const x, Fixed const y): _x(x), _y(y)
{
	return ;
}

Point::Point(Point const &obj): _x(obj.getX()), _y(obj.getY())
{
	return ;
}

Fixed	Point::getX(void) const
{
	return (_x);
}

Fixed	Point::getY(void) const
{
	return (_y);
}

Point	&Point:: operator = (Point const &obj)
{
	(void)obj;
	return (*this);
}
//	if (this != &obj)
//	{
//		_x = obj.getX();
//		_y = obj.getY();
//	}

std::ostream	& operator << (std::ostream &out, Point const &point)
{
	out << "(" << point.getX() << ", " << point.getY() << ")";
	return (out);
}
