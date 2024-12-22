/* ************************************************************************** */
/*                                                                            */
/*                                                         :::      ::::::::  */
/*  main.cpp                                             :+:      :+:    :+:  */
/*                                                     +:+ +:+         +:+    */
/*  By: mvelazqu <mvelazqu@student.42barcelona.c     +#+  +:+       +#+       */
/*                                                 +#+#+#+#+#+   +#+          */
/*  Created: 2024/12/21 17:51:04 by mvelazqu            #+#    #+#            */
/*  Updated: 2024/12/22 19:46:48 by mvelazqu           ###   ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main(void)
{
	std::cout << "Start of Program" << std::endl << std::endl;
	try
	{
		Bureaucrat				idiota("Nikita Kruschev", 137);
		ShrubberyCreationForm	fresa("Frutilla");

		std::cout << std::endl << idiota << std::endl;
		std::cout << fresa << std::endl;
		idiota.executeForm(fresa);
		//fresa.execute(idiota);
		idiota.signForm(fresa);
		std::cout << fresa << std::endl;
		//fresa.execute(idiota);
		idiota.executeForm(fresa);
		std::cout << std::endl;
	}
	catch (std::exception const &ex)
	{
		std::cout << std::endl << "###Exception: " << ex.what() << std::endl;
	}
	catch (...)
	{
		std::cout << "Default exception for randoms throws" << std::endl;
	}
	std::cout << std::endl << "End of Program" << std::endl;
}
