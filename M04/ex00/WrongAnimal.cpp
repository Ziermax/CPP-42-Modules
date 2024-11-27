/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelazqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 23:03:56 by mvelazqu          #+#    #+#             */
/*   Updated: 2024/11/27 23:07:25 by mvelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal destructor has been called" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(void)
{
	std::cout << "WrongAnimal void constructor has been called" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(WrongAnimal const &obj)
{
	std::cout << "WrongAnimal copy constructor has been called" << std::endl;
	*this = obj;
}

WrongAnimal	&WrongAnimal:: operator = (WrongAnimal const &obj)
{
	std::cout << "WrongAnimal copy assignator has been called" << std::endl;
	if (this != &obj)
	{
	}
	return (*this);
}
