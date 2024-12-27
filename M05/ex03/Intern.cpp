/* ************************************************************************** */
/*                                                                            */
/*                                                         :::      ::::::::  */
/*  Intern.cpp                                           :+:      :+:    :+:  */
/*                                                     +:+ +:+         +:+    */
/*  By: mvelazqu <mvelazqu@student.42barcelona.c     +#+  +:+       +#+       */
/*                                                 +#+#+#+#+#+   +#+          */
/*  Created: 2024/12/26 16:59:45 by mvelazqu            #+#    #+#            */
/*  Updated: 2024/12/27 19:11:02 by mvelazqu           ###   ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int const			Intern::_numForms = MAX_FORMS;
std::string const	Intern::_forms[MAX_FORMS] = {
	"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};
AForm				*(*Intern::_formConstruct[MAX_FORMS])(std::string) = {
	makeShrubberyCreationForm, NULL, NULL};


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

AForm	*Intern::makeShrubberyCreationForm(std::string target)
{
	return (new ShrubberyCreationForm(target));
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
		std::cout << "HOla Mundo\n";
	}
	if (i == _numForms)
		return (NULL);
	formPtr = _formConstruct[i](target);
	return (formPtr);
}

Intern	&Intern:: operator = (Intern const &obj)
{
	if (this != &obj)
	{
	}
	return (*this);
}
