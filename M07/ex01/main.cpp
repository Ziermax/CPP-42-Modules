/* ************************************************************************** */
/*                                                                            */
/*                                                         :::      ::::::::  */
/*  main.cpp                                             :+:      :+:    :+:  */
/*                                                     +:+ +:+         +:+    */
/*  By: mvelazqu <mvelazqu@student.42barcelona.c     +#+  +:+       +#+       */
/*                                                 +#+#+#+#+#+   +#+          */
/*  Created: 2025/08/04 19:38:23 by mvelazqu            #+#    #+#            */
/*  Updated: 2025/08/04 19:48:48 by mvelazqu           ###   ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "iter.hpp"

void	print(int &num)
{
	std::cout << num << std::endl;
}

void	printStr(std::string &str)
{
	std::cout << str << std::endl;
}

int	main(void)
{
	int			arr[5] = {1, 2, 3, 4, 5};
	std::string	arrStr[10] = {
		"Hola Mudno 1",
		"Hola Mudno 2",
		"Hola Mudno 3",
		"Hola Mudno 4",
		"Hola Mudno 5",
		"Hola Mudno 6",
		"Hola Mudno 7",
		"Hola Mudno 8",
		"Hola Mudno 9",
		"Hola Mudno 10"};

	iter(arr, 5, print);
	iter(arrStr, 10, printStr);
}
