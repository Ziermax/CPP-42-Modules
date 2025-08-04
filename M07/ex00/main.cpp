/* ************************************************************************** */
/*                                                                            */
/*                                                         :::      ::::::::  */
/*  main.cpp                                             :+:      :+:    :+:  */
/*                                                     +:+ +:+         +:+    */
/*  By: mvelazqu <mvelazqu@student.42barcelona.c     +#+  +:+       +#+       */
/*                                                 +#+#+#+#+#+   +#+          */
/*  Created: 2025/08/04 17:14:14 by mvelazqu            #+#    #+#            */
/*  Updated: 2025/08/04 18:49:52 by mvelazqu           ###   ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "whatever.hpp"

int main( void )
{
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	return 0;
}

/*
int	main(void)
{
	int	a;
	int	b;
	std::string	as("a");
	std::string	bs("b");

	a = 2;
	b = 5;
	std::cout << "a: " << a << " | b: " << b << std::endl;
	std::cout << "as: " << as << " | bs: " << bs << std::endl;
	swap(a, b);
	swap(as, bs);
	std::cout << "a: " << a << " | b: " << b << std::endl;
	std::cout << "Min a | b = " << min(a, b) << std::endl;

	std::cout << "as: " << as << " | bs: " << bs << std::endl;
	std::cout << "Min as | bs = " << min(as, bs) << std::endl;
}*/
