/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelazqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 23:03:47 by mvelazqu          #+#    #+#             */
/*   Updated: 2024/11/27 23:07:59 by mvelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat destructor has been called" << std::endl;
	return ;
}

WrongCat::WrongCat(void)
{
	std::cout << "WrongCat void constructor has been called" << std::endl;
	return ;
}

WrongCat::WrongCat(WrongCat const &obj)
{
	std::cout << "WrongCat copy constructor has been called" << std::endl;
	*this = obj;
}

WrongCat	&WrongCat:: operator = (WrongCat const &obj)
{
	std::cout << "WrongCat copy assignator has been called" << std::endl;
	if (this != &obj)
	{
	}
	return (*this);
}
