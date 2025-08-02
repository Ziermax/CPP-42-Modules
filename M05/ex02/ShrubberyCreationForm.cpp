/* ************************************************************************** */
/*                                                                            */
/*                                                         :::      ::::::::  */
/*  ShrubberyCreationForm.cpp                            :+:      :+:    :+:  */
/*                                                     +:+ +:+         +:+    */
/*  By: mvelazqu <mvelazqu@student.42barcelona.c     +#+  +:+       +#+       */
/*                                                 +#+#+#+#+#+   +#+          */
/*  Created: 2024/12/22 17:28:42 by mvelazqu            #+#    #+#            */
/*  Updated: 2025/07/21 14:25:29 by mvelazqu           ###   ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>//ofstream class
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	std::cout << "Shrubbery destructor called" << std::endl;
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(void): AForm("Fresa", 145, 137)
{
	std::cout << "Shrubbery void constructor called" << std::endl;
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):
	AForm(target, 145, 137)
{
	std::cout << "Shrubbery single parameter constructor called" << std::endl;
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &obj):
	AForm(obj)
{
	std::cout << "Shrubbery copy constructor called" << std::endl;
	*this = obj;
}

void	ShrubberyCreationForm::doExec(Bureaucrat const &executor) const
{
	std::cout << "Hi! I'm executing (" << this->getName() << ")" << std::endl
		<< " | Hello, Executing, I'm " << executor.getName() << std::endl;
	std::ofstream outfile((getName() + "_shrubbery").c_str());
	if (!outfile.is_open())
		throw std::runtime_error("Error to open the file.");
	std::string const	GREEN = "\033[32m";
	std::string const	BROWN = "\033[33m";
	std::string const	RESET = "\033[0m";

	std::string	const	tree =
		GREEN +
		"                    &&&&&&&&&&&&&&&&&&&&&&&&\n" +
		"                 &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&\n" +
		"              &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&\n" +
		"           &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&\n" +
		"        &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&\n" +
		"     &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&\n" +
		"  &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&\n" +
		"&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&\n" +
		BROWN +
		"                          |||\n" +
		"                          |||\n" +
		"                          |||\n" +
		"                          |||\n" +
		"                          |||\n" +
		"                          |||\n" +
		"                          |||\n" +
		"                          |||\n" +
		"                          |||\n" +
		"                          |||\n" +
		"                         |||||\n" +
		"                     |||||||||\n" +
		"                 |||||||||||||\n" +
		"             |||||||||||||||||||\n" +
		"        |||||||||||||||||||||||||\n" +
		"    |||||||||||||||||||||||||||||||\n" +
		RESET;
	outfile << tree;
	outfile.close();
}

ShrubberyCreationForm	&ShrubberyCreationForm:: operator = (
	ShrubberyCreationForm const &obj)
{
	if (this != &obj)
	{
		AForm:: operator = (obj);
	}
	return (*this);
}
