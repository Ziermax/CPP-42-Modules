/* ************************************************************************** */
/*                                                                            */
/*                                                         :::      ::::::::  */
/*  main.cpp                                             :+:      :+:    :+:  */
/*                                                     +:+ +:+         +:+    */
/*  By: mvelazqu <mvelazqu@student.42barcelona.c     +#+  +:+       +#+       */
/*                                                 +#+#+#+#+#+   +#+          */
/*  Created: 2024/12/21 17:51:04 by mvelazqu            #+#    #+#            */
/*  Updated: 2025/07/21 14:45:32 by mvelazqu           ###   ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

#define FORM_NAME "42_Pool"
#define TARGET_NAME "Borrar"

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
	/* Shrubbery creation form */
	std::cout << "\033[32mShrubbery creation Form" << std::endl;
	std::cout << "\033[33m\nSign and execute - Bureaucrat yes sign, yes exec\n\033[0m" << std::endl;
	{
		Bureaucrat				toto("Boss", 1);
		ShrubberyCreationForm	scf(TARGET_NAME);

		try
		{
			toto.signForm(scf);
			toto.executeForm(scf);
		}
		catch (const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	std::cout << "\033[33m\nSign and execute - Bureaucrat no sign, no exec\n\033[0m" << std::endl;
	{
		Bureaucrat				toto("Al Mostfired", 150);
		ShrubberyCreationForm	scf(TARGET_NAME);
		try
		{
			toto.signForm(scf);
			toto.executeForm(scf);
		}
		catch (const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	std::cout << "\033[33m\nSign and execute - Bureaucrat yes sign, no exec\n\033[0m" << std::endl;
	{
		Bureaucrat				toto("Assistant", 138);
		ShrubberyCreationForm	scf(TARGET_NAME);
		try
		{
			toto.signForm(scf);
			toto.executeForm(scf);
		}
		catch (const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	/* Robotomy request form */
	std::cout << "\033[32m\n\nRobotomy request Form" << std::endl;
	std::cout << "\033[33m\nSign and execute - Bureaucrat yes sign, yes exec\n\033[0m" << std::endl;
	{
		Bureaucrat				toto("Boss", 1);
		RobotomyRequestForm	rrf(FORM_NAME, TARGET_NAME);
		try
		{
			toto.signForm(rrf);
			toto.executeForm(rrf);
		}
		catch (const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	std::cout << "\033[33m\nSign and execute - Bureaucrat no sign, no exec\n\033[0m" << std::endl;
	{
		Bureaucrat				toto("Al Mostfired", 150);
		RobotomyRequestForm		rrf(FORM_NAME, TARGET_NAME);
		try
		{
			toto.signForm(rrf);
			toto.executeForm(rrf);
		}
		catch (const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	std::cout << "\033[33m\nSign and execute - Bureaucrat yes sign, no exec\n\033[0m" << std::endl;
	{
		Bureaucrat				toto("Assistant", 50);
		RobotomyRequestForm		rrf(FORM_NAME, TARGET_NAME);
		try
		{
			toto.signForm(rrf);
			toto.executeForm(rrf);
		}
		catch (const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	/* Presidential pardon form */
	std::cout << "\033[32m\n\nPresidential pardon Form" << std::endl;
	std::cout << "\033[33m\nSign and execute - Bureaucrat yes sign, yes exec\n\033[0m" << std::endl;
	{
		Bureaucrat				toto("Boss", 1);
		PresidentialPardonForm	ppf(FORM_NAME, TARGET_NAME);
		try
		{
			toto.signForm(ppf);
			toto.executeForm(ppf);
		}
		catch (const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	std::cout << "\033[33m\nSign and execute - Bureaucrat no sign, no exec\n\033[0m" << std::endl;
	{
		Bureaucrat				toto("Al Mostfired", 150);
		PresidentialPardonForm	ppf(FORM_NAME, TARGET_NAME);
		try
		{
			toto.signForm(ppf);
			toto.executeForm(ppf);
		}
		catch (const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	std::cout << "\033[33m\nSign and execute - Bureaucrat yes sign, no exec\n\033[0m" << std::endl;
	{
		Bureaucrat				toto("Assistant", 15);
		PresidentialPardonForm	ppf(FORM_NAME, TARGET_NAME);
		try
		{
			toto.signForm(ppf);
			toto.executeForm(ppf);
		}
		catch (const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}/* Shrubbery creation form */
	std::cout << "\033[32mShrubbery creation Form" << std::endl;
	std::cout << "\033[33m\nSign and execute - Bureaucrat yes sign, yes exec\n\033[0m" << std::endl;
	{
		Bureaucrat				toto("Boss", 1);
		ShrubberyCreationForm	scf(TARGET_NAME);

		try
		{
			toto.signForm(scf);
			toto.executeForm(scf);
		}
		catch (const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	std::cout << "\033[33m\nSign and execute - Bureaucrat no sign, no exec\n\033[0m" << std::endl;
	{
		Bureaucrat				toto("Al Mostfired", 150);
		ShrubberyCreationForm	scf(TARGET_NAME);
		try
		{
			toto.signForm(scf);
			toto.executeForm(scf);
		}
		catch (const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	std::cout << "\033[33m\nSign and execute - Bureaucrat yes sign, no exec\n\033[0m" << std::endl;
	{
		Bureaucrat				toto("Assistant", 138);
		ShrubberyCreationForm	scf(TARGET_NAME);
		try
		{
			toto.signForm(scf);
			toto.executeForm(scf);
		}
		catch (const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	/* Robotomy request form */
	std::cout << "\033[32m\n\nRobotomy request Form" << std::endl;
	std::cout << "\033[33m\nSign and execute - Bureaucrat yes sign, yes exec\n\033[0m" << std::endl;
	{
		Bureaucrat				toto("Boss", 1);
		RobotomyRequestForm	rrf(FORM_NAME, TARGET_NAME);
		try
		{
			toto.signForm(rrf);
			toto.executeForm(rrf);
		}
		catch (const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	std::cout << "\033[33m\nSign and execute - Bureaucrat no sign, no exec\n\033[0m" << std::endl;
	{
		Bureaucrat				toto("Al Mostfired", 150);
		RobotomyRequestForm		rrf(FORM_NAME, TARGET_NAME);
		try
		{
			toto.signForm(rrf);
			toto.executeForm(rrf);
		}
		catch (const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	std::cout << "\033[33m\nSign and execute - Bureaucrat yes sign, no exec\n\033[0m" << std::endl;
	{
		Bureaucrat				toto("Assistant", 50);
		RobotomyRequestForm		rrf(FORM_NAME, TARGET_NAME);
		try
		{
			toto.signForm(rrf);
			toto.executeForm(rrf);
		}
		catch (const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	/* Presidential pardon form */
	std::cout << "\033[32m\n\nPresidential pardon Form" << std::endl;
	std::cout << "\033[33m\nSign and execute - Bureaucrat yes sign, yes exec\n\033[0m" << std::endl;
	{
		Bureaucrat				toto("Boss", 1);
		PresidentialPardonForm	ppf(FORM_NAME, TARGET_NAME);
		try
		{
			toto.signForm(ppf);
			toto.executeForm(ppf);
		}
		catch (const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	std::cout << "\033[33m\nSign and execute - Bureaucrat no sign, no exec\n\033[0m" << std::endl;
	{
		Bureaucrat				toto("Al Mostfired", 150);
		PresidentialPardonForm	ppf(FORM_NAME, TARGET_NAME);
		try
		{
			toto.signForm(ppf);
			toto.executeForm(ppf);
		}
		catch (const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	std::cout << "\033[33m\nSign and execute - Bureaucrat yes sign, no exec\n\033[0m" << std::endl;
	{
		Bureaucrat				toto("Assistant", 15);
		PresidentialPardonForm	ppf(FORM_NAME, TARGET_NAME);
		try
		{
			toto.signForm(ppf);
			toto.executeForm(ppf);
		}
		catch (const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
}
