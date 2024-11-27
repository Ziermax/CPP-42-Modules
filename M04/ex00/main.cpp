/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelazqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 14:48:28 by mvelazqu          #+#    #+#             */
/*   Updated: 2024/11/27 19:09:35 by mvelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

/*
int	main(void)
{
	Dog	doggu;
	Cat	catto;
	Animal	*genericAnimal;;
	std::cout << std::endl;

	genericAnimal = &catto;
	catto.makeSound();
	doggu.makeSound();
	doggu.Animal::makeSound();
	genericAnimal->makeSound();
	std::cout << std::endl;
}
*/
int	main(void)
{
	Animal const	*meta = new Animal();
	Animal const	*j = new Dog();
	Animal const	*i = new Cat();

	std::cout << std::endl;
	std::cout << meta->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	meta->makeSound();
	j->makeSound();
	i->makeSound(); //will output the cat sound!
	std::cout << std::endl;
	
	delete meta;
	delete i;
	delete j;
}
/*
*/
