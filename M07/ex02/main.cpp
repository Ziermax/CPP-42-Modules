/* ************************************************************************** */
/*                                                                            */
/*                                                         :::      ::::::::  */
/*  main.cpp                                             :+:      :+:    :+:  */
/*                                                     +:+ +:+         +:+    */
/*  By: mvelazqu <mvelazqu@student.42barcelona.c     +#+  +:+       +#+       */
/*                                                 +#+#+#+#+#+   +#+          */
/*  Created: 2025/08/04 20:06:16 by mvelazqu            #+#    #+#            */
/*  Updated: 2025/08/04 20:38:07 by mvelazqu           ###   ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <exception>
#include "Array.hpp"

int	main(void)
{
	try
	{
		Array<int>	array(5);
		std::cout << "Hola Mundo" << std::endl;
		//array.assign(1, 5);
		std::cout << "array en 2: " << array[6] << std::endl;
	}
	catch (std::exception const &ex)
	{
		std::cerr << std::endl << "Error: " << ex.what() << std::endl;
	}
	catch (...)
	{
		std::cerr << "Error ocurred" << std::endl;
	}
}
