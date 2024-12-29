/* ************************************************************************** */
/*                                                                            */
/*                                                         :::      ::::::::  */
/*  main.cpp                                             :+:      :+:    :+:  */
/*                                                     +:+ +:+         +:+    */
/*  By: mvelazqu <mvelazqu@student.42barcelona.c     +#+  +:+       +#+       */
/*                                                 +#+#+#+#+#+   +#+          */
/*  Created: 2024/12/29 17:18:09 by mvelazqu            #+#    #+#            */
/*  Updated: 2024/12/29 17:29:56 by mvelazqu           ###   ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include <iostream>

int	main(void)
{
	Data			example;
	Data			second;
	unsigned long	address;
	Data			*ptrData;

	example.i = 0;
	example.str = "Me quiero morir";
	example.next = &second;
	second.i = 2;
	second.str = "No paso de año";
	second.next = NULL;
	address = Serializer::serialize(&example);
	ptrData = Serializer::deserialize(address);

	std::cout << "Address: " << reinterpret_cast<void *>(address) << std::endl;
	std::cout << "Address: " << &example << std::endl;
	std::cout << "i: " << ptrData->i << std::endl;
	std::cout << "str: " << ptrData->str << std::endl;
	std::cout << "next address: " << ptrData->next << std::endl;
	std::cout << std::endl << "Changing exmple:" << std::endl;

	example = second;
	std::cout << "Address: " << reinterpret_cast<void *>(address) << std::endl;
	std::cout << "Address: " << &example << std::endl;
	std::cout << "i: " << ptrData->i << std::endl;
	std::cout << "str: " << ptrData->str << std::endl;
	std::cout << "next address: " << ptrData->next << std::endl;
}
