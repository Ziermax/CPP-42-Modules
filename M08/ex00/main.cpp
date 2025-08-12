/* ************************************************************************** */
/*                                                                            */
/*                                                         :::      ::::::::  */
/*  main.cpp                                             :+:      :+:    :+:  */
/*                                                     +:+ +:+         +:+    */
/*  By: mvelazqu <mvelazqu@student.42barcelona.c     +#+  +:+       +#+       */
/*                                                 +#+#+#+#+#+   +#+          */
/*  Created: 2025/08/12 17:43:38 by mvelazqu            #+#    #+#            */
/*  Updated: 2025/08/12 19:23:17 by mvelazqu           ###   ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

std::vector<std::string>::iterator	find(
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
}

int	main(void)
{
	std::cout << "Hola Mundo" << std::endl;

	std::vector<std::string>	vecStr;

	vecStr.push_back("HOla");
	vecStr.push_back("Mundo");
	for (std::vector<std::string>::iterator it = vecStr.begin();
			it != vecStr.end(); ++it)
	{
		std::cout << "Vec[]: " << *it << std::endl;
	}
}
