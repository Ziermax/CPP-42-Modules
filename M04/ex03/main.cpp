/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelazqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 12:59:47 by mvelazqu          #+#    #+#             */
/*   Updated: 2024/12/01 13:07:24 by mvelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fire.hpp"

int	main(void)
{
	Fire	fire;
	Fire	*firePtr;

	std::cout << std::endl;
	firePtr = fire.clone();
	delete firePtr;
	std::cout << std::endl;
	return (0);
}
