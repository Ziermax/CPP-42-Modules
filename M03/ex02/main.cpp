/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelazqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 14:46:29 by mvelazqu          #+#    #+#             */
/*   Updated: 2024/11/23 23:05:34 by mvelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	FragTrap	fragTrap;
	std::cout << std::endl;
	FragTrap	adria("Adria");
	std::cout << std::endl;
	FragTrap	adriaCopy(adria);
	std::cout << std::endl;

	adriaCopy.setName("Adria 2");
	fragTrap.highFivesGuys();
	for (int i = 0; i < 5; i++)
	{
		adria.attack(fragTrap.getName());
		fragTrap.takeDamage(adria.getAttackDamage());
	}
	adriaCopy.attack(adria.getName());
	std::cout << std::endl;
}
