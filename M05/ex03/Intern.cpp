/* ************************************************************************** */
/*                                                                            */
/*                                                         :::      ::::::::  */
/*  Intern.cpp                                           :+:      :+:    :+:  */
/*                                                     +:+ +:+         +:+    */
/*  By: mvelazqu <mvelazqu@student.42barcelona.c     +#+  +:+       +#+       */
/*                                                 +#+#+#+#+#+   +#+          */
/*  Created: 2024/12/26 16:59:45 by mvelazqu            #+#    #+#            */
/*  Updated: 2025/07/21 16:28:46 by mvelazqu           ###   ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#include <stdexcept>
#include "Intern.hpp"

int const			Intern::_numForms = MAX_FORMS;
std::string const	Intern::_forms[MAX_FORMS] = {
	"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};
AForm				*(*Intern::_formConstruct[MAX_FORMS])(std::string, std::string) = {
	makeShrubberyCreationForm,
	makeRobotomyRequestForm,
	makePresidentialPardonForm};


Intern::~Intern(void)
{
	return ;
}

Intern::Intern(void)
{
	return ;
}

Intern::Intern(Intern const &obj)
{
	*this = obj;
}

AForm	*Intern::makeShrubberyCreationForm(
		std::string name, std::string target)
{
	return (new ShrubberyCreationForm(name, target));
}

AForm	*Intern::makePresidentialPardonForm(
		std::string name, std::string target)
{
	return (new PresidentialPardonForm(name, target));
}

AForm	*Intern::makeRobotomyRequestForm(
		std::string name, std::string target)
{
	return (new RobotomyRequestForm(name, target));
}

AForm	*Intern::makeForm(std::string form, std::string target)
{
	AForm	*formPtr;
	int		i;

	i = 0;
	while (i < _numForms)
	{
		if (_forms[i] == form)
			break ;
		i++;
	}
	if (i == _numForms)
		throw (std::invalid_argument("No Form named like that"));
	formPtr = _formConstruct[i](form, target);
	return (formPtr);
}

Intern	&Intern:: operator = (Intern const &obj)
{
	if (this != &obj)
	{
	}
	return (*this);
}
