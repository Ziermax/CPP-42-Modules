/* ************************************************************************** */
/*                                                                            */
/*                                                         :::      ::::::::  */
/*  ScalarConverter.cpp                                  :+:      :+:    :+:  */
/*                                                     +:+ +:+         +:+    */
/*  By: mvelazqu <mvelazqu@student.42barcelona.c     +#+  +:+       +#+       */
/*                                                 +#+#+#+#+#+   +#+          */
/*  Created: 2024/12/22 20:03:00 by mvelazqu            #+#    #+#            */
/*  Updated: 2024/12/27 19:39:49 by mvelazqu           ###   ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::~ScalarConverter(void)
{
	return ;
}

ScalarConverter::ScalarConverter(void)
{
	return ;
}

ScalarConverter::ScalarConverter(ScalarConverter const &obj)
{
	*this = obj;
}

void	ScalarConverter::convert(std::string input)
{
	(void)input;
}

ScalarConverter	&ScalarConverter:: operator = (ScalarConverter const &obj)
{
	if (this != &obj)
	{
	}
	return (*this);
}
