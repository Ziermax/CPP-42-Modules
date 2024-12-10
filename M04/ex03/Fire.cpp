/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fire.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelazqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 17:54:30 by mvelazqu          #+#    #+#             */
/*   Updated: 2024/12/01 13:09:01 by mvelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fire.hpp"

Fire::~Fire(void)
{
	std::cout << "Fire destructor called for" << this << std::endl;
	return ;
}

Fire::Fire(void): AMateria("fire")
{
	std::cout << "Fire void constructor called for " << this << std::endl;
	return ;
}

Fire::Fire(Fire const &obj)
{
	std::cout << "Fire copy constructor called for " << this << std::endl;
	*this = obj;
}

Fire	*Fire::clone(void) const
{
	Fire	*fireClone;

	fireClone = new Fire;
	if (!fireClone)
		return (NULL);
	*fireClone = *this;
	return (fireClone);
}

Fire	&Fire:: operator = (Fire const &obj)
{
	std::cout << "Fire copy assignation called for " << this << std::endl;
	if (this != &obj)
	{
		_type = obj.getType();
	}
	return (*this);
}
