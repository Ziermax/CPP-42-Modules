/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelazqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 17:04:52 by mvelazqu          #+#    #+#             */
/*   Updated: 2024/11/10 17:08:43 by mvelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class	HumanB
{
	public:
		HumanB( std::string name );
		~HumanB( void );

		void	attack( void ) const;
		void	setWeapon( Weapon &weapon );

	private:
		std::string	_name;
		Weapon		*_weapon;
};

#endif
