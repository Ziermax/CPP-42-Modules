/* ************************************************************************** */
/*                                                                            */
/*                                                         :::      ::::::::  */
/*  main.cpp                                             :+:      :+:    :+:  */
/*                                                     +:+ +:+         +:+    */
/*  By: mvelazqu <mvelazqu@student.42barcelona.c     +#+  +:+       +#+       */
/*                                                 +#+#+#+#+#+   +#+          */
/*  Created: 2024/12/21 17:51:04 by mvelazqu            #+#    #+#            */
/*  Updated: 2025/07/21 16:32:33 by mvelazqu           ###   ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#include <stdexcept>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int	main(void)
{
	std::cout << "Start of Program" << std::endl << std::endl;
	try
	{
		Intern	intern;

		AForm	*sCForm = intern.makeForm("ShrubberyCreationForm", "archivo");
		AForm	*pPForm = intern.makeForm("PresidentialPardonForm", "Yo");
		AForm	*rRForm = intern.makeForm("RobotomyRequestForm", "Robot");

		delete	sCForm;
		delete	pPForm;
		delete	rRForm;

		intern.makeForm("NoneForm", "void");

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
