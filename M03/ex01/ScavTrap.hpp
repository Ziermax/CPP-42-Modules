/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelazqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 17:44:19 by mvelazqu          #+#    #+#             */
/*   Updated: 2024/11/23 14:45:27 by mvelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class	ScavTrap: public ClapTrap
{
	public:
		~ScavTrap( void );
		ScavTrap( void );
		ScavTrap( ScavTrap const &obj );
		ScavTrap( std::string name );

		void	guardGate( void ) const;

		ScavTrap	& operator = ( ScavTrap const &obj );
};

#endif
