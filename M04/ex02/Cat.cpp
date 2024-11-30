/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelazqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 20:29:48 by mvelazqu          #+#    #+#             */
/*   Updated: 2024/11/29 14:03:26 by mvelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::~Cat(void)
{
	std::cout << "Cat destructor called, it's dead now" << std::endl;
	delete _brain;
	return ;
}

Cat::Cat(void): Animal("Cat")
{
	std::cout << "Cat void constructor called" << std::endl;
	_brain = new Brain;
	return ;
}

Cat::Cat(Cat const &obj)
{
	std::cout << "Cat copy constructor called" << std::endl;
	_brain = new Brain;
	*this = obj;
}

void	Cat::makeSound(void) const
{
	std::cout << _type << " sound: woffn't woffn't" << std::endl;
}

void	Cat::expressFeelings(void) const
{
	_brain->showIdeas();
}

Cat	&Cat:: operator = (Cat const &obj)
{
	std::cout << "Cat copy assignation called" << std::endl;
	if (this != &obj)
	{
		Animal::operator = (obj);
		*_brain = *obj._brain;
	}
	return (*this);
}
