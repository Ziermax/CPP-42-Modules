/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelazqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 16:15:01 by mvelazqu          #+#    #+#             */
/*   Updated: 2024/11/19 21:20:51 by mvelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::~Fixed(void)
{
	return ;
}

Fixed::Fixed(void): _fixPoint(0)
{
	return ;
}

Fixed::Fixed(int const value)
{
	_fixPoint = value << _fractBits;
}

Fixed::Fixed(float const value)
{
	_fixPoint = roundf(value * (1 << _fractBits));
}

Fixed::Fixed(Fixed const &cpyConst)
{
	*this = cpyConst;
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

Fixed	&Fixed:: operator = (Fixed const &cpyAssign)
{
	if (this != &cpyAssign)
	{
		_fixPoint = cpyAssign.getRawBits();
	}
	return (*this);
}

bool	Fixed:: operator > (Fixed const  &comparison) const
{
	return (_fixPoint > comparison.getRawBits());
}

bool	Fixed:: operator < (Fixed const  &comparison) const
{
	return (_fixPoint < comparison.getRawBits());
}

bool	Fixed:: operator >= (Fixed const &comparison) const
{
	return (_fixPoint >= comparison.getRawBits());
}

bool	Fixed:: operator <= (Fixed const &comparison) const
{
	return (_fixPoint <= comparison.getRawBits());
}

bool	Fixed:: operator == (Fixed const &comparison) const
{
	return (_fixPoint == comparison.getRawBits());
}

bool	Fixed:: operator != (Fixed const &comparison) const
{
	return (_fixPoint != comparison.getRawBits());
}

Fixed	Fixed:: operator + (Fixed const &mathOp) const
{
	return (this->toFloat() + mathOp.toFloat());
}

Fixed	Fixed:: operator - (Fixed const &mathOp) const
{
	return (this->toFloat() - mathOp.toFloat());
}

Fixed	Fixed:: operator * (Fixed const &mathOp) const
{
	return (this->toFloat() * mathOp.toFloat());
}

Fixed	Fixed:: operator / (Fixed const &mathOp) const
{
	return (this->toFloat() / mathOp.toFloat());
}

Fixed	&Fixed:: operator ++ ()
{
	++_fixPoint;
	return (*this);
}

Fixed	&Fixed:: operator -- ()
{
	--_fixPoint;
	return (*this);
}

Fixed	Fixed:: operator ++ (int)
{
	Fixed	tmp;

	tmp = *this;
	++_fixPoint;
	return (tmp);
}

Fixed	Fixed:: operator -- (int)
{
	Fixed	tmp;

	tmp = *this;
	--_fixPoint;
	return (tmp);
}

Fixed	&Fixed::min(Fixed &fixedA, Fixed &fixedB)
{
	if (fixedA <= fixedB)
		return (fixedA);
	return (fixedB);
}

Fixed const	&Fixed::min(Fixed const &fixedA, Fixed const &fixedB)
{
	if (fixedA <= fixedB)
		return (fixedA);
	return (fixedB);
}

Fixed	&Fixed::max(Fixed &fixedA, Fixed &fixedB)
{
	if (fixedA >= fixedB)
		return (fixedA);
	return (fixedB);
}

Fixed const	&Fixed::max(Fixed const &fixedA, Fixed const &fixedB)
{
	if (fixedA >= fixedB)
		return (fixedA);
	return (fixedB);
}

std::ostream	& operator << (std::ostream &out, Fixed const &fixedPoint)
{
	out << fixedPoint.toFloat();
	return (out);
}
