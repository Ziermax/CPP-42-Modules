/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelazqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 14:48:28 by mvelazqu          #+#    #+#             */
/*   Updated: 2024/11/29 14:04:47 by mvelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

/*
int	main(void)
{
	Dog	voidDog;
	std::cout << std::endl;

	voidDog._brain->setIdea("Todo ha acabado", 0);
	voidDog.expressThoughts();
	std::cout << std::endl;

	Dog	copyDog(voidDog);
	std::cout << std::endl;

	copyDog._brain->setIdea("Me quiero morir", 2);
	std::cout << "cpy type: " << copyDog.getType() << std::endl;
	copyDog.expressThoughts();
	std::cout << std::endl;

	voidDog.expressThoughts();
	std::cout << std::endl;
	
	std::cout << std::endl;
}
*/

int	main(void)
{
	unsigned int static	arrayNum = 100;
	Animal				*animalArray[arrayNum];
	unsigned int		i;

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
