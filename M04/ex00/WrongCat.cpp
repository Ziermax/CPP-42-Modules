/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelazqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 23:03:47 by mvelazqu          #+#    #+#             */
/*   Updated: 2024/11/28 14:58:40 by mvelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat destructor has been called" << std::endl;
	return ;
}

WrongCat::WrongCat(void): WrongAnimal("Strange Cat")
{
	std::cout << "WrongCat void constructor has been called" << std::endl;
	return ;
}

WrongCat::WrongCat(WrongCat const &obj): WrongAnimal(obj)
{
	std::cout << "WrongCat copy constructor has been called" << std::endl;
}

void	WrongCat::makeSound(void) const
{
	std::cout << _type << " is making cat noises, yet by the looks of it"
		<< ", that animal is not a cat, not a healthy one..." << std::endl;
}

WrongCat	&WrongCat:: operator = (WrongCat const &obj)
{
	std::cout << "WrongCat copy assignator has been called" << std::endl;
	if (this != &obj)
	{
		WrongAnimal:: operator = (obj);
	}
	return (*this);
}
