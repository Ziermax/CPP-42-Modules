/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelazqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 16:15:01 by mvelazqu          #+#    #+#             */
/*   Updated: 2024/11/16 16:34:12 by mvelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed::Fixed(void): _fixPoint(0)
{
	std::cout << "Void constructor called" << std::endl;
	return ;
}

Fixed::Fixed(Fixed const &cpyConst)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = cpyConst;
}

Fixed	&Fixed:: operator = (Fixed const &cpyAssign)
{
	std::cout << "Copy assign called" << std::endl;
	if (this != &cpyAssign)
	{
		_fixPoint = cpyAssign.getRawBits();
	}
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member func called" << std::endl;
	return (_fixPoint);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member func called" << std::endl;
	_fixPoint = raw;
}
