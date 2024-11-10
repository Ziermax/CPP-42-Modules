/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelazqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 16:03:53 by mvelazqu          #+#    #+#             */
/*   Updated: 2024/11/10 15:37:05 by mvelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde( int N, std::string name );

int	main(void)
{
	Zombie	*horde;
	int		num;
	int		i;

	num = 5;
	horde = zombieHorde(num, "Horda de Sonbis");
	if (!horde)
		return (-1);
	i = 0;
	while (i < num)
		horde[i++].announce();
	delete [] horde;
}
