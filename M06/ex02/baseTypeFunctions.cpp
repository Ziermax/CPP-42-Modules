/* ************************************************************************** */
/*                                                                            */
/*                                                         :::      ::::::::  */
/*  baseTypeFunctions.cpp                                :+:      :+:    :+:  */
/*                                                     +:+ +:+         +:+    */
/*  By: mvelazqu <mvelazqu@student.42barcelona.c     +#+  +:+       +#+       */
/*                                                 +#+#+#+#+#+   +#+          */
/*  Created: 2025/02/15 15:43:29 by mvelazqu            #+#    #+#            */
/*  Updated: 2025/08/04 17:08:37 by mvelazqu           ###   ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "ABC.hpp"
#include <iostream>
#include <cstdlib>

Base	*generate(void)
{
	int	n;
	
	n = std::rand() % 3;
	if (!n)
		return (new A);
	else if (n == 1)
		return (new B);
	else
		return (new C);
}

void	identify(Base *p)
{
	void	*ptr;

	ptr = dynamic_cast<A *>(p);
	if (ptr)
	{
		std::cout << "This is A Class pointer" << std::endl;
		return ;
	}
	ptr = dynamic_cast<B *>(p);
	if (ptr)
	{
		std::cout << "This is B Class pointer" << std::endl;
		return ;
	}
	ptr = dynamic_cast<C *>(p);
	if (ptr)
	{
		std::cout << "This is C Class pointer" << std::endl;
		return ;
	}
	std::cout << "This is not ABC Class pointer" << std::endl;
}

void	identify(Base &p)
{
	try
	{
		(void)dynamic_cast<A &>(p);
		std::cout << "This is A Class " << std::endl;
		return ;
	}
	catch (std::exception const &ex)
	{
		std::cout << "This is not A, exception: " << ex.what() << std::endl;
	}
	try
	{
		(void)dynamic_cast<B &>(p);
		std::cout << "This is B Class " << std::endl;
		return ;
	}
	catch (std::exception const &ex)
	{
		std::cout << "This is not B, exception: " << ex.what() << std::endl;
	}
	try
	{
		(void)dynamic_cast<C &>(p);
		std::cout << "This is C Class " << std::endl;
		return ;
	}
	catch (std::exception const &ex)
	{
		std::cout << "This is not C, exception: " << ex.what() << std::endl;
	}
}
