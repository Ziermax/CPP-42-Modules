/* ************************************************************************** */
/*                                                                            */
/*                                                         :::      ::::::::  */
/*  Form.hpp                                             :+:      :+:    :+:  */
/*                                                     +:+ +:+         +:+    */
/*  By: mvelazqu <mvelazqu@student.42barcelona.c     +#+  +:+       +#+       */
/*                                                 +#+#+#+#+#+   +#+          */
/*  Created: 2024/12/21 17:50:54 by mvelazqu            #+#    #+#            */
/*  Updated: 2024/12/21 18:06:42 by mvelazqu           ###   ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <stdexcept>
# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class	Form
{
	public:
		~Form( void );
		Form( void );
		Form( Form const &obj );
		Form( int grade );
		Form( std::string name, int signGrade, int execGrade );

		std::string	getName( void ) const;
		bool		getIsSigned( void ) const;
		int			getSignGrade( void ) const;
		int			getExecGrade( void ) const;
		void		beSigned( Bureaucrat const &buro );
		static void	checkThrowGrade( int grade );

		Form	& operator = ( Form const &obj );

	private:
		std::string const	_name;
		bool				_isSigned;
		int const			_signGrade;
		int const			_execGrade;

	class	GradeTooHighException: public std::exception
	{
		public:
			char const	*what( void ) const throw();
	};

	class	GradeTooLowException: public std::exception
	{
		public:
			char const	*what( void ) const throw();
	};
};

std::ostream	& operator << ( std::ostream &out, Form const &form );

#endif
