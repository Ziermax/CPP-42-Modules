/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelazqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 15:49:38 by mvelazqu          #+#    #+#             */
/*   Updated: 2024/11/09 16:07:26 by mvelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class	Zombie
{
	public:
		Zombie( std::string name );
		~Zombie( void );
		void	announce( void ) const;

	private:
		std::string	_name;
};
