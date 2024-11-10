/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelazqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 16:42:14 by mvelazqu          #+#    #+#             */
/*   Updated: 2024/11/10 17:15:15 by mvelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class	Weapon
{
	public:
		Weapon( std::string type );
		Weapon( void );
		~Weapon( void );

		std::string	const	&getType( void ) const;
		void				setType( std::string type );

	private:
		std::string	_type;
};

#endif
