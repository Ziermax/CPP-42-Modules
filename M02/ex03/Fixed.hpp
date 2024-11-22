/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelazqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 15:18:35 by mvelazqu          #+#    #+#             */
/*   Updated: 2024/11/22 12:55:50 by mvelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class	Fixed
{
	public:
		~Fixed( void );
		Fixed( void );
		Fixed( int const value );
		Fixed( float const value );
		Fixed( Fixed const &cpyConst );

		float	toFloat( void ) const;
		int		toInt( void ) const;
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );

		Fixed	& operator = ( Fixed const &cpyAssign );
		bool	operator > ( Fixed const &comparison ) const;
		bool	operator < ( Fixed const &comparison ) const;
		bool	operator >= ( Fixed const &comparison ) const;
		bool	operator <= ( Fixed const &comparison ) const;
		bool	operator == ( Fixed const &comparison ) const;
		bool	operator != ( Fixed const &comparison ) const;
		Fixed	operator + ( Fixed const &mathOp ) const;
		Fixed	operator - ( Fixed const &mathOp ) const;
		Fixed	operator * ( Fixed const &mathOp ) const;
		Fixed	operator / ( Fixed const &mathOp ) const;
		Fixed	& operator ++ ();
		Fixed	& operator -- ();
		Fixed	operator ++ ( int );
		Fixed	operator -- ( int );

		static Fixed		&min( Fixed &fixedA, Fixed &fixedB );
		static Fixed const	&min( Fixed const &fixedA, Fixed const &fixedB );
		static Fixed		&max( Fixed &fixedA, Fixed &fixedB );
		static Fixed const	&max( Fixed const &fixedA, Fixed const &fixedB );
		static Fixed		fpabs( Fixed value );

	private:
		int static const	_fractBits = 8;
		int					_fixPoint;

//		int	_getFlippedDecimal( void ) const;
};

std::ostream	& operator << ( std::ostream &out, Fixed const &fixedPoint );

#endif
