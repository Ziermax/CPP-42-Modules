/* ************************************************************************** */
/*                                                                            */
/*                                                         :::      ::::::::  */
/*  main.cpp                                             :+:      :+:    :+:  */
/*                                                     +:+ +:+         +:+    */
/*  By: mvelazqu <mvelazqu@student.42barcelona.c     +#+  +:+       +#+       */
/*                                                 +#+#+#+#+#+   +#+          */
/*  Created: 2024/12/21 17:51:04 by mvelazqu            #+#    #+#            */
/*  Updated: 2024/12/21 18:15:32 by mvelazqu           ###   ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	std::cout << "Start of Program" << std::endl << std::endl;
	try
	{
		int			grade = 140;
		Form		formulary("Formulary", grade, grade);
		Form		second(formulary);
		Form		trhird("Idiota", 150, 150);
		Bureaucrat	idiota("Nikita Kruschev", 145);

		std::cout << std::endl << idiota << std::endl;
		std::cout << formulary << std::endl;
		idiota.signForm(formulary);
		std::cout << formulary << std::endl << std::endl;
		std::cout << trhird << std::endl;
		idiota.signForm(trhird);
		std::cout << trhird << std::endl << std::endl;
		//Bureaucrat("Basura", 1).signForm(trhird);
	}
	catch (std::exception const &ex)
	{
		std::cout << "Exception: " << ex.what() << std::endl;
	}
	catch (...)
	{
		std::cout << "Default exception for randoms throws" << std::endl;
	}
	std::cout << std::endl << "End of Program" << std::endl;
}
