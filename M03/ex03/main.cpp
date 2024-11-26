/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelazqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 14:46:29 by mvelazqu          #+#    #+#             */
/*   Updated: 2024/11/26 19:04:04 by mvelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap		diamondo("Dio");
	std::cout << std::endl;

	diamondo.highFivesGuys();
	std::cout << std::endl;
	diamondo.guardGate();
	std::cout << std::endl;
	diamondo.whoAmI();
	std::cout << std::endl;
	diamondo.attack("America");
	std::cout << std::endl;
}
