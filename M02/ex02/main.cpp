/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelazqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 16:27:27 by mvelazqu          #+#    #+#             */
/*   Updated: 2024/11/22 12:14:33 by mvelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
int	main(void)
{
	{
		Fixed		a;
		Fixed const	b( Fixed( 5.05f ) * Fixed( 2 ) );

		std::cout << a << std::endl;
		std::cout << ++a << std::endl;
		std::cout << a << std::endl;
		std::cout << a++ << std::endl;
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << Fixed::max( a, b ) << std::endl;
	}
	{
		Fixed	a(5);
		Fixed	b(-1);

		b.setRawBits(-1);
		a.setRawBits(-1);
		b * a;

		std::cout << "a: " << a << " | b: " << b << std::endl;
		std::cout << "a + b = " << a + b << std::endl;
		std::cout << "a - b = " << a - b << std::endl;
		std::cout << "a * b = " << a * b << std::endl;
		std::cout << "a / b = " << a / b << std::endl;
	}

	return 0;
}
