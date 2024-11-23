/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelazqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 14:46:29 by mvelazqu          #+#    #+#             */
/*   Updated: 2024/11/23 14:57:22 by mvelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	scavTrap;
	ScavTrap	adria("adria");

	scavTrap.guardGate();
	for (int i = 0; i < 5; i++)
	{
		adria.attack(scavTrap.getName());
		scavTrap.takeDamage(adria.getAttackDamage());
	}
}
