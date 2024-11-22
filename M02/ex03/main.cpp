/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelazqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 16:27:27 by mvelazqu          #+#    #+#             */
/*   Updated: 2024/11/22 13:51:42 by mvelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>

bool	bsp(Point const a, Point const b, Point const c, Point const point);

int	main(void)
{
	Point	a(0, 0);
	Point	b(0, -10);
	Point	c(-10, 0);
	Point	point(-4.8f, -5.f);

	std::cout << "Triangle: " << std::endl
		<< a << std::endl << b << std::endl << c << std::endl;
	std::cout << "Point: " << point << std::endl;
	if (bsp(a, b, c, point))
		std::cout << "Point is inside triangle" << std::endl;
	else
		std::cout << "Point is not inside triangle" << std::endl;
	return (0);
}
