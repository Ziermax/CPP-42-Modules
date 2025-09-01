/* ************************************************************************** */
/*                                                                            */
/*                                                         :::      ::::::::  */
/*  main.cpp                                             :+:      :+:    :+:  */
/*                                                     +:+ +:+         +:+    */
/*  By: mvelazqu <mvelazqu@student.42barcelona.c     +#+  +:+       +#+       */
/*                                                 +#+#+#+#+#+   +#+          */
/*  Created: 2025/08/12 17:43:38 by mvelazqu            #+#    #+#            */
/*  Updated: 2025/08/20 16:09:25 by mvelazqu           ###   ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "easyfind.hpp"

/*
std::vector<std::string>::iterator	easyfind(
		std::vector<std::string> &vecStr,
		int i)
{
	std::vector<std::string>::iterator	it;
	it = std::find(vecStr.begin(), vecStr.end(), 1);
//	for (it	= vecStr.begin(); it != vecStr.end(); ++it)
//	{
		(void)i;
//		if (*it == i)
//			break ;
//	}
	return (it);
}*/

int	main(void)
{
	std::cout << "Hola Mundo" << std::endl;

	std::vector<std::string>	vecStr;
	std::vector<int>			vecInt;

	vecStr.push_back("HOla");
	vecStr.push_back("Mundo");
	vecInt.push_back(1);
	vecInt.push_back(2);
	for (std::vector<std::string>::iterator it = vecStr.begin();
			it != vecStr.end(); ++it)
	{
		std::cout << "VecStr[]: " << *it << std::endl;
	}
	for (std::vector<int>::iterator it = vecInt.begin();
			it != vecInt.end(); ++it)
	{
		std::cout << "VecInt[]: " << *it << std::endl;
	}
	try
	{
		std::vector<int>::const_iterator
			itInt = easyfind(vecInt, 2);
		std::vector<std::string>::const_iterator
			itStr = easyfind(vecStr, 2);
		std::cout << "Founded this: " << *itInt << std::endl;
	}
	catch (...)
	{
		std::cerr << "Error Ocurred: Not founded" << std::endl;
	}
}
