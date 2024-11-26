/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelazqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 22:29:08 by mvelazqu          #+#    #+#             */
/*   Updated: 2024/11/26 11:20:30 by mvelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class	FragTrap: virtual public ClapTrap
{
	public:
		~FragTrap( void );
		FragTrap( void );
		FragTrap( FragTrap const &obj );
		FragTrap( std::string name );

		void	highFivesGuys( void ) const;

		FragTrap	& operator = ( FragTrap const &obj );
};

#endif
