/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelazqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 16:27:27 by mvelazqu          #+#    #+#             */
/*   Updated: 2024/11/18 21:35:50 by mvelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int	main( void )
{
	Fixed	test = 1.5f;
	Fixed	a;
	Fixed	b(10);
	Fixed	c(42.42f);
	Fixed	d(b);

	a = Fixed( 1234.4321f );
	a = b - c;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "a is " << a << std::endl;
	std::cout << "d is " << d << std::endl;
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	std::cout << "MY A: " << a.getRawBits() << std::endl;

	return 0;
}
//	a.setRawBits(2147483647);
//	a.myStaff();
//	std::cout << "My: a is " << a << std::endl;
//	std::cout << "My: a is " << a.toInt() << " as integer" << std::endl;
