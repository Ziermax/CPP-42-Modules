/* ************************************************************************** */
/*                                                                            */
/*                                                         :::      ::::::::  */
/*  Form.cpp                                             :+:      :+:    :+:  */
/*                                                     +:+ +:+         +:+    */
/*  By: mvelazqu <mvelazqu@student.42barcelona.c     +#+  +:+       +#+       */
/*                                                 +#+#+#+#+#+   +#+          */
/*  Created: 2024/12/21 17:50:29 by mvelazqu            #+#    #+#            */
/*  Updated: 2024/12/21 18:06:36 by mvelazqu           ###   ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::~Form(void)
{
	std::cout << "Form destructor called" << std::endl;
	return ;
}

Form::Form(void):
	_name("NADA"), _isSigned(false), _signGrade(150), _execGrade(1)
{
	std::cout << "Form void constructor called" << std::endl;
	return ;
}

Form::Form(int grade):
	_name("Form"), _isSigned(false), _signGrade(grade), _execGrade(grade)
{
	std::cout << "Form single parameter constructor called" << std::endl;
	checkThrowGrade(grade);
	return ;
}

Form::Form(Form const &obj):
	_name(obj.getName()), _signGrade(obj.getSignGrade()),
	_execGrade(obj.getExecGrade())
{
	std::cout << "Form copy constructor called" << std::endl;
	checkThrowGrade(_signGrade);
	checkThrowGrade(_execGrade);
	*this = obj;
}

Form::Form(std::string name, int signGrade, int execGrade):
	_name(name), _isSigned(false), _signGrade(signGrade), _execGrade(execGrade)
{
	std::cout << "Form parametrized constructor called" << std::endl;
	checkThrowGrade(signGrade);
	checkThrowGrade(execGrade);
	return ;
}

void	Form::beSigned(Bureaucrat const &buro)
{
	if (buro.getGrade() > _signGrade)
		throw (GradeTooLowException());
	_isSigned = true;
}

void	Form::checkThrowGrade(int grade)
{
	if (grade < 1)
		throw (GradeTooHighException());
	if (grade > 150)
		throw (GradeTooLowException());
}

std::string	Form::getName( void ) const
{
	return (_name);
}

bool		Form::getIsSigned( void ) const
{
	return (_isSigned);
}

int			Form::getSignGrade( void ) const
{
	return (_signGrade);
}

int			Form::getExecGrade( void ) const
{
	return (_execGrade);
}

Form	&Form:: operator = (Form const &obj)
{
	if (this != &obj)
	{
		_isSigned = obj.getIsSigned();
	}
	return (*this);
}

char const	*Form::GradeTooHighException::what(void) const throw()
{
	return ("Form grade is too high");
}

char const	*Form::GradeTooLowException::what(void) const throw()
{
	return ("Form grade is too low");
}

std::ostream	& operator << (std::ostream &out, Form const &form)
{
	out << form.getName() << " sign(" << form.getSignGrade()
		<< ") | execute(" << form.getExecGrade() << ") | is it sign? ";
	if (form.getIsSigned())
		out << "U'r go to go, pal";
	else
		out << "Not signed, bruh";
	return (out);
}
