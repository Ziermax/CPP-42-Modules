/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelazqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 20:25:33 by mvelazqu          #+#    #+#             */
/*   Updated: 2024/11/28 14:29:03 by mvelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::~Dog(void)
{
	std::cout << "Dog destructor called, it's dead now" << std::endl;
	return ;
}

Dog::Dog(void): Animal("Dog")
{
	std::cout << "Dog void constructor called" << std::endl;
	return ;
}

Dog::Dog(Dog const &obj)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = obj;
}

void	Dog::makeSound(void) const
{
	std::cout << _type << " sound: woff woff" << std::endl;
}

Dog	&Dog:: operator = (Dog const &obj)
{
	std::cout << "Dog copy assignation called" << std::endl;
	if (this != &obj)
	{
		Animal::operator = (obj);
	}
	return (*this);
}
