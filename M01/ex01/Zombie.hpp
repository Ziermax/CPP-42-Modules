/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelazqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 15:49:38 by mvelazqu          #+#    #+#             */
/*   Updated: 2024/11/10 15:24:53 by mvelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class	Zombie
{
	public:
		Zombie( std::string name );
		Zombie( void );
		~Zombie( void );
		void	announce( void ) const;
		void	setName( std::string name );

	private:
		std::string	_name;
};
