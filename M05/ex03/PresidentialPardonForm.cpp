/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*  PresidentialPardonForm.cpp                           :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: adrmarqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 12:05:53 by adrmarqu          #+#    #+#             */
/*  Updated: 2025/07/21 14:39:33 by mvelazqu           ###   ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void):
	AForm::AForm("PresidentialPardonForm", 25, 5), _target("default")
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string name,
		std::string target):
	AForm::AForm(name, 25, 5), _target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm(
		PresidentialPardonForm const &other):
	AForm::AForm(other), _target(other._target)
{
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(
		PresidentialPardonForm const &ob)
{
	AForm::operator=(ob);
	_target = ob._target;
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	return ;
}

void	PresidentialPardonForm::doExec(Bureaucrat const &executor) const
{
	(void)executor;
	std::cout << _target << " has been pardoned by Zaphod Beeblebrox."
		<< std::endl;
}
