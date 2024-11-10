/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelazqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 17:07:52 by mvelazqu          #+#    #+#             */
/*   Updated: 2024/11/10 17:20:58 by mvelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int	main(void)
{
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
	Weapon	weapon;
	HumanA	adria("Adria", weapon);
	HumanB	asley("Asley");
	adria.attack();
	asley.attack();
	asley.setWeapon(weapon);
	asley.attack();
	weapon.setType("Ametralladora");
	adria.attack();
	asley.attack();
	return (0);
}
