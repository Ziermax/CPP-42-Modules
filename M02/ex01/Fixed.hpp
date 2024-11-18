/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelazqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 15:18:35 by mvelazqu          #+#    #+#             */
/*   Updated: 2024/11/16 19:37:01 by mvelazqu         ###   ########.fr       */
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

		Fixed		& operator = ( Fixed const &cpyAssign );

		float	toFloat( void ) const;
		int		toInt( void ) const;
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );

	private:
		int static const	_fractBits = 8;
		int					_fixPoint;
};

std::ostream	& operator << ( std::ostream &out, Fixed const &fixedPoint );

#endif
