/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelazqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 20:33:36 by mvelazqu          #+#    #+#             */
/*   Updated: 2024/12/19 12:45:43 by mvelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	std::cout << "Start of Program" << std::endl << std::endl;
	try
	{
		int	high = 2;
		int	low = 15;
		Bureaucrat	buro("Nikita Khrushchev", high);

		buro.incrementGrade();
		for (int i = 0; i < low; i++)
			buro.decrementGrade();
		std::cout << buro << std::endl;
	}
	catch (std::exception const &ex)
	{
		std::cout << "Exception: " << ex.what() << std::endl;
	}
	std::cout << std::endl << "End of Program" << std::endl;
}
