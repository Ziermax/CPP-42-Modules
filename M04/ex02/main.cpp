/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelazqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 14:48:28 by mvelazqu          #+#    #+#             */
/*   Updated: 2024/11/30 15:26:06 by mvelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	unsigned int static	arrayNum = 6;
	Animal				*animalArray[arrayNum];
	unsigned int		i;
	//Animal			noWay;

	i = 0;
	while (i < arrayNum / 2)
	{
		animalArray[i] = new Dog;
		std::cout << std::endl;
		i++;
	}
	while (i < arrayNum)
	{
		animalArray[i] = new Cat;
		std::cout << std::endl;
		i++;
	}
	std::cout << std::endl;
	i = 0;
	while (i < arrayNum)
	{
		delete animalArray[i];
		std::cout << std::endl;
		i++;
	}
}
