/* ************************************************************************** */
/*                                                                            */
/*                                                         :::      ::::::::  */
/*  AForm.cpp                                            :+:      :+:    :+:  */
/*                                                     +:+ +:+         +:+    */
/*  By: mvelazqu <mvelazqu@student.42barcelona.c     +#+  +:+       +#+       */
/*                                                 +#+#+#+#+#+   +#+          */
/*  Created: 2024/12/21 17:50:29 by mvelazqu            #+#    #+#            */
/*  Updated: 2024/12/22 19:47:25 by mvelazqu           ###   ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::~AForm(void)
{
	std::cout << "AForm destructor called" << std::endl;
	return ;
}

AForm::AForm(void):
	_name("NADA"), _isSigned(false), _signGrade(150), _execGrade(1)
{
	std::cout << "AForm void constructor called" << std::endl;
	return ;
}

AForm::AForm(int grade):
	_name("AForm"), _isSigned(false), _signGrade(grade), _execGrade(grade)
{
	std::cout << "AForm single parameter constructor called" << std::endl;
	checkThrowGrade(grade);
	return ;
}

AForm::AForm(AForm const &obj):
	_name(obj.getName()), _signGrade(obj.getSignGrade()),
	_execGrade(obj.getExecGrade())
{
	std::cout << "AForm copy constructor called" << std::endl;
	checkThrowGrade(_signGrade);
	checkThrowGrade(_execGrade);
	*this = obj;
}

AForm::AForm(std::string name, int signGrade, int execGrade):
	_name(name), _isSigned(false), _signGrade(signGrade), _execGrade(execGrade)
{
	std::cout << "AForm parametrized constructor called" << std::endl;
	checkThrowGrade(signGrade);
	checkThrowGrade(execGrade);
	return ;
}

void	AForm::beSigned(Bureaucrat const &buro)
{
	if (buro.getGrade() > _signGrade)
		throw (GradeTooLowException());
	_isSigned = true;
}

void	AForm::execute(Bureaucrat const &executor) const
{
	if (!_isSigned)
		throw (NotSignException());
	if (executor.getGrade() > _execGrade)
		throw (GradeTooLowException());
	doExec(executor);
}

void	AForm::checkThrowGrade(int grade)
{
	if (grade < 1)
		throw (GradeTooHighException());
	if (grade > 150)
		throw (GradeTooLowException());
}

std::string	AForm::getName( void ) const
{
	return (_name);
}

bool		AForm::getIsSigned( void ) const
{
	return (_isSigned);
}

int			AForm::getSignGrade( void ) const
{
	return (_signGrade);
}

int			AForm::getExecGrade( void ) const
{
	return (_execGrade);
}

AForm	&AForm:: operator = (AForm const &obj)
{
	if (this != &obj)
	{
		_isSigned = obj.getIsSigned();
	}
	return (*this);
}

char const	*AForm::GradeTooHighException::what(void) const throw()
{
	return ("Form grade is too high");
}

char const	*AForm::GradeTooLowException::what(void) const throw()
{
	return ("Form grade is too low");
}

char const	*AForm::NotSignException::what(void) const throw()
{
	return ("Form not signed");
}

std::ostream	& operator << (std::ostream &out, AForm const &form)
{
	out << form.getName() << " sign(" << form.getSignGrade()
		<< ") | execute(" << form.getExecGrade() << ") | is it sign? ";
	if (form.getIsSigned())
		out << "U'r go to go, pal";
	else
		out << "Not signed, bruh";
	return (out);
}
