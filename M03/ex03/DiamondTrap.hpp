/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelazqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 17:37:26 by mvelazqu          #+#    #+#             */
/*   Updated: 2024/11/26 17:28:38 by mvelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class	DiamondTrap: public ScavTrap, public FragTrap
{
	public:
		~DiamondTrap( void );
		DiamondTrap( void );
		DiamondTrap( DiamondTrap const &obj );
		DiamondTrap( std::string const name );

		void	whoAmI( void ) const;
		void	setClapName( std::string );

		DiamondTrap	& operator = ( DiamondTrap const &obj );

	private:
		std::string	_name;
		std::string	&_clapName;
};

#endif
