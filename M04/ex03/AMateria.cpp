/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelazqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 17:31:51 by mvelazqu          #+#    #+#             */
/*   Updated: 2024/12/01 13:09:03 by mvelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::~AMateria(void)
{
	std::cout << "AMateria destructor called for " << this << std::endl;
	return ;
}

AMateria::AMateria(void): _type("Undefined")
{
	std::cout << "AMateria void constructor called for " << this << std::endl;
	return ;
}

AMateria::AMateria(std::string type): _type(type)
{
	std::cout << "AMateria string constructor called for " << this << std::endl;
	return ;
}

AMateria::AMateria(AMateria const &obj)
{
	std::cout << "AMateria copy constructor called for " << this << std::endl;
	*this = obj;
}

std::string const	&AMateria::getType(void) const
{
	return (_type);
}

//void	AMateria::use(ICharacter &target)
//{
//}

AMateria	&AMateria:: operator = (AMateria const &obj)
{
	std::cout << "AMateria copy assignation called for " << this << std::endl;
	if (this != &obj)
	{
		_type = obj._type;
	}
	return (*this);
}
