/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelazqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 16:15:01 by mvelazqu          #+#    #+#             */
/*   Updated: 2024/11/19 21:21:03 by mvelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

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

Fixed::Fixed(int const value)
{
	std::cout << "Int constructor called" << std::endl;
	_fixPoint = value << _fractBits;
}

Fixed::Fixed(float const value)
{
	std::cout << "Float constructor called" << std::endl;
	_fixPoint = round(value * (1 << _fractBits));
}

Fixed::Fixed(Fixed const &cpyConst)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = cpyConst;
}

Fixed	&Fixed:: operator = (Fixed const &cpyAssign)
{
	std::cout << "Copy assign operator called" << std::endl;
	if (this != &cpyAssign)
	{
		_fixPoint = cpyAssign.getRawBits();
	}
	return (*this);
}

float	Fixed::toFloat(void) const
{
	return (static_cast<float>(_fixPoint) / (1 << _fractBits));
}

int	Fixed::toInt(void) const
{
	return (_fixPoint >> _fractBits);
}

int	Fixed::getRawBits(void) const
{
	return (_fixPoint);
}

void	Fixed::setRawBits(int const raw)
{
	_fixPoint = raw;
}

std::ostream	& operator << (std::ostream &out, Fixed const &fixedPoint)
{
	out << fixedPoint.toFloat();
	return (out);
}
