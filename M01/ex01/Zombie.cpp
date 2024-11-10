/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelazqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 15:48:54 by mvelazqu          #+#    #+#             */
/*   Updated: 2024/11/10 15:36:05 by mvelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( std::string name ): _name(name)
{
	return ;
}

Zombie::Zombie( void ): _name("noname")
{
	return ;
}

Zombie::~Zombie( void )
{
	std::cout << "Destructing Zombie: " << _name << std::endl;
}

void	Zombie::announce( void ) const
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
void	Zombie::setName( std::string name )
{
	_name = name;
	return ;
}
