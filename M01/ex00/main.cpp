/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelazqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 16:03:53 by mvelazqu          #+#    #+#             */
/*   Updated: 2024/11/10 15:42:26 by mvelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*newZombie( std::string name );
void	randomChump(std::string name);

int	main(void)
{
	Zombie	*da_zombie;

	da_zombie = newZombie("El nuevo");
	if (da_zombie)
	{
		da_zombie->announce();
		delete(da_zombie);
	}
	else
		std::cout << "Malloc error" << std::endl;
	std::cout << std::endl;
	randomChump("El al azar");
}
