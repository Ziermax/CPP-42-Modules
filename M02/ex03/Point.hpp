/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelazqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 21:01:10 by mvelazqu          #+#    #+#             */
/*   Updated: 2024/11/22 12:57:21 by mvelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class	Point
{
	public:
		~Point( void );
		Point( void );
		Point( Fixed const x, Fixed const y );
		Point( Point const &obj );

		Fixed	getX( void ) const;
		Fixed	getY( void ) const;

		Point	& operator = ( Point const &obj );

	private:
		Fixed const	_x;
		Fixed const	_y;
};

std::ostream	& operator << ( std::ostream &out, Point const &point );

#endif
