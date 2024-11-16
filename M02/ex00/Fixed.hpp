/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelazqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 15:18:35 by mvelazqu          #+#    #+#             */
/*   Updated: 2024/11/16 16:33:16 by mvelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class	Fixed
{
	public:
		~Fixed( void );
		Fixed( void );
		Fixed( Fixed const &cpyConst );

		Fixed	& operator =( Fixed const &cpyAssign );

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );

	private:
		int static const	_fractBits = 8;
		int					_fixPoint;
};

#endif
