/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelazqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 14:12:33 by mvelazqu          #+#    #+#             */
/*   Updated: 2024/11/23 14:44:53 by mvelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class	ClapTrap
{
	public:
		~ClapTrap( void );
		ClapTrap( void );
		ClapTrap( ClapTrap const &obj );
		ClapTrap( std::string name );

		void			attack( std::string const &target );
		void			takeDamage( unsigned int amount );
		void			beRepair( unsigned int amount );
		void			setName( std::string name );
		void			setAttackDamage( unsigned int amount );
		std::string		getName( void ) const;
		unsigned int	getHitPoints( void ) const;
		unsigned int	getAttackDamage( void ) const;

		ClapTrap	& operator = ( ClapTrap const &obj );

	protected:
		std::string		_name;
		unsigned int	_hitPoints;
		unsigned int	_energyPoints;
		unsigned int	_attackDamage;

		void	_deathMessage( void );
};

#endif
