/* ************************************************************************** */
/*                                                                            */
/*                                                         :::      ::::::::  */
/*  baseTypeFunctions.cpp                                :+:      :+:    :+:  */
/*                                                     +:+ +:+         +:+    */
/*  By: mvelazqu <mvelazqu@student.42barcelona.c     +#+  +:+       +#+       */
/*                                                 +#+#+#+#+#+   +#+          */
/*  Created: 2025/02/15 15:43:29 by mvelazqu            #+#    #+#            */
/*  Updated: 2025/02/15 18:41:04 by mvelazqu           ###   ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "ABC.hpp"
#include <iostream>
#include <cstdlib>

Base	*generate(void)
{
	int	i;

    srand(time(NULL));
	i = std::rand() % 3;
	switch (i)
	{
		case 0:
			return (new A);
		case 1:
			return (new B);
		case 2:
			return (new C);
		default:
			return (NULL);
	}
	return (NULL);
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
