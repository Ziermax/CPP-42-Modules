/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelazqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 16:15:01 by mvelazqu          #+#    #+#             */
/*   Updated: 2024/11/22 12:13:06 by mvelazqu         ###   ########.fr       */
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
	Fixed	ret;

	ret.setRawBits(_fixPoint + mathOp.getRawBits());
	return (ret);
}

Fixed	Fixed:: operator - (Fixed const &mathOp) const
{
	Fixed	ret;

	ret.setRawBits(_fixPoint - mathOp.getRawBits());
	return (ret);
}

Fixed	Fixed:: operator * (Fixed const &mathOp) const
{
	Fixed	ret;
	long	a;
	long	b;

	a = _fixPoint;
	b = mathOp.getRawBits();
	a *= b;
	a = a >> _fractBits;
	ret.setRawBits((int)a);
	return (ret);
}

Fixed	Fixed:: operator / (Fixed const &mathOp) const
{
	Fixed	ret;
	long	a;
	long	b;

	a = _fixPoint;
	b = mathOp.getRawBits();
	a /= b;
	a = a << _fractBits;
	ret.setRawBits((int)a);
	return (ret);
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
//
//int	Fixed::_getFlippedDecimal(void) const
//{
//	int	flipped;
//	int	bit;
//	int	i;
//
//	flipped = 0;
//	i = 0;
//	std::cout << "raw bytes: " << _fixPoint << std::endl;
//	while (i < _fractBits)
//	{
//		//bit = _fixPoint & (1 << i);
//		bit = (_fixPoint >> i) & 1;
//		printf("bit[%d]: %d\n", i + 1, bit);
//		bit = bit << (_fractBits - i);
//		printf("Storing: %d in [%d]\n", bit, _fractBits - i);
//		//flipped = flipped | ((_fixPoint & (1 << i)) >> (_fractBits - 1 - i));
//		flipped = flipped | bit;
//		printf("Flipped: %d\n\n", flipped);
//		i++;
//	}
//	return (flipped);
//}
