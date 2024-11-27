/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelazqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 19:17:09 by mvelazqu          #+#    #+#             */
/*   Updated: 2024/11/27 17:57:43 by mvelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::~Animal(void)
{
	std::cout << "Animal destructor called, animal is dead now" << std::endl;
	return ;
}

Animal::Animal(void): _type("Grotesque beast")
{
	std::cout << "Animal void constructor called" << std::endl;
	return ;
}

Animal::Animal(Animal const &obj)
{
	*this = obj;
	std::cout << "Animal copy constructor called" << std::endl;
}

Animal::Animal(std::string type): _type(type)
{
	std::cout << "Animal string constructor called" << std::endl;
	return ;
}

std::string	Animal::getType(void) const
{
	return (_type);
}

void	Animal::makeSound(void) const
{
	std::cout  << _type << " is making a horrible sound" << std::endl;
}

Animal	&Animal:: operator = (Animal const &obj)
{
	std::cout << "Animal copy assignation called" << std::endl;
	if (this != &obj)
	{
		this->_type = obj._type;
	}
	return (*this);
}
