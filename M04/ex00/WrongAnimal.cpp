/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelazqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 23:03:56 by mvelazqu          #+#    #+#             */
/*   Updated: 2024/11/28 14:49:44 by mvelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal destructor has been called" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(void): _type("Strange Animal")
{
	std::cout << "WrongAnimal void constructor has been called" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(WrongAnimal const &obj)
{
	std::cout << "WrongAnimal copy constructor has been called" << std::endl;
	*this = obj;
}

WrongAnimal::WrongAnimal(std::string const type): _type(type)
{
	std::cout << "WrongAnimal string constructor has been called" << std::endl;
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << _type << " is making a sound, you don't know what"
		<< " produce that horrid sound" << std::endl;
}

std::string	WrongAnimal::getType(void) const
{
	return (_type);
}

WrongAnimal	&WrongAnimal:: operator = (WrongAnimal const &obj)
{
	std::cout << "WrongAnimal copy assignator has been called" << std::endl;
	if (this != &obj)
	{
		_type = obj._type;
	}
	return (*this);
}
