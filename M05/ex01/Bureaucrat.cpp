/* ************************************************************************** */
/*                                                                            */
/*                                                         :::      ::::::::  */
/*  Bureaucrat.cpp                                       :+:      :+:    :+:  */
/*                                                     +:+ +:+         +:+    */
/*  By: mvelazqu <mvelazqu@student.42barcelona.c     +#+  +:+       +#+       */
/*                                                 +#+#+#+#+#+   +#+          */
/*  Created: 2024/12/21 17:51:19 by mvelazqu            #+#    #+#            */
/*  Updated: 2024/12/21 18:06:47 by mvelazqu           ###   ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Bureaucrat destructor called" << std::endl;
	return ;
}

Bureaucrat::Bureaucrat(void): _name("Burocrat"), _grade(150)
{
	std::cout << "Bureaucrat void constructor called" << std::endl;
	return ;
}

Bureaucrat::Bureaucrat(Bureaucrat const &obj): _name(obj.getName())
{
	std::cout << "Bureaucrat copy constructor called" << std::endl;
	*this = obj;
}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name), _grade(grade)
{
	std::cout << "Bureaucrat parametrized constructor called" << std::endl;
	/*	*
	 *	throw in the constructor skips the destructor call	*/
	checkThrowGrade(grade);
	return ;
}

void	Bureaucrat::signForm(Form &form) const
{
	try
	{
		form.beSigned(*this);
		std::cout << _name << " signed " << form.getName() << std::endl;
	}
	catch (std::exception const &ex)
	{
		std::cout << _name << " couldn’t sign " << form.getName()
			<< " because " << ex.what() << "." << std::endl;
	}
}

void	Bureaucrat::checkThrowGrade(int grade)
{
	if (grade < 1)
		throw (GradeTooHighException());
	if (grade > 150)
		throw (GradeTooLowException());
}

std::string	Bureaucrat::getName(void) const
{
	return (_name);
}

int	Bureaucrat::getGrade(void) const
{
	return (_grade);
}

void	Bureaucrat::incrementGrade(void)
{
	--_grade;
	checkThrowGrade(_grade);
}
//		throw (std::out_of_range("Grade cannot be higher"));

void	Bureaucrat::decrementGrade(void)
{
	++_grade;
	checkThrowGrade(_grade);
}

Bureaucrat	&Bureaucrat:: operator = (Bureaucrat const &obj)
{
	if (this != &obj)
	{
		_grade = obj.getGrade();
	}
	return (*this);
}

char const	*Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return ("Grade is too high");
}

char const	*Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return ("Grade is too low");
}

std::ostream	& operator << (std::ostream &out, Bureaucrat const &buro)
{
	out << buro.getName() << ", bureaucrat grade " << buro.getGrade();
	return (out);
}
