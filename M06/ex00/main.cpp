/* ************************************************************************** */
/*                                                                            */
/*                                                         :::      ::::::::  */
/*  main.cpp                                             :+:      :+:    :+:  */
/*                                                     +:+ +:+         +:+    */
/*  By: mvelazqu <mvelazqu@student.42barcelona.c     +#+  +:+       +#+       */
/*                                                 +#+#+#+#+#+   +#+          */
/*  Created: 2024/12/27 19:25:09 by mvelazqu            #+#    #+#            */
/*  Updated: 2025/07/23 19:08:53 by mvelazqu           ###   ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <iostream>

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (std::cerr << "You need one argument" << std::endl, 1);
	ScalarConverter::convert(argv[1]);
}
