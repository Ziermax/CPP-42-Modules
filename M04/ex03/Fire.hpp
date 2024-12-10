/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fire.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelazqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 17:54:27 by mvelazqu          #+#    #+#             */
/*   Updated: 2024/11/30 17:57:23 by mvelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIRE_HPP
# define FIRE_HPP

# include "AMateria.hpp"

class	Fire: public AMateria
{
	public:
		~Fire( void );
		Fire( void );
		Fire( Fire const &obj );

		Fire	*clone( void ) const;

		Fire	& operator = ( Fire const &obj );
};

#endif
