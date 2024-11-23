/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelazqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 17:33:01 by mvelazqu          #+#    #+#             */
/*   Updated: 2024/11/22 17:41:48 by mvelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	robot1;
	ClapTrap	robot2(robot1);

	robot2.setName("Alberto");
	robot1.beRepair(robot2.getHitPoints());
	robot1.setAttackDamage(15);
	robot1.attack(robot2.getName());
	robot2.takeDamage(robot1.getAttackDamage());
}
