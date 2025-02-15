/* ************************************************************************** */
/*                                                                            */
/*                                                         :::      ::::::::  */
/*  main.cpp                                             :+:      :+:    :+:  */
/*                                                     +:+ +:+         +:+    */
/*  By: mvelazqu <mvelazqu@student.42barcelona.c     +#+  +:+       +#+       */
/*                                                 +#+#+#+#+#+   +#+          */
/*  Created: 2025/02/12 19:14:59 by mvelazqu            #+#    #+#            */
/*  Updated: 2025/02/15 18:50:54 by mvelazqu           ###   ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Base.hpp"
#include "ABC.hpp"

int	main(void)
{
	Base	*aPtr = new(A);
	Base	*bPtr = new(B);
	Base	*cPtr = new(C);
	Base	base;
	Base	*basePtr = generate();

	identify(aPtr);
	std::cout << std::endl;

	identify(bPtr);
	std::cout << std::endl;

	identify(cPtr);
	std::cout << std::endl;

	identify(NULL);
	std::cout << std::endl;

	identify(*aPtr);
	std::cout << std::endl;

	identify(*bPtr);
	std::cout << std::endl;

	identify(*cPtr);
	std::cout << std::endl;

	identify(base);
	std::cout << std::endl;
	std::cout << std::endl;

	identify(basePtr);
	identify(*basePtr);

	delete aPtr;
	delete bPtr;
	delete cPtr;
	delete basePtr;
}
