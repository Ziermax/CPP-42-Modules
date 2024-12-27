/* ************************************************************************** */
/*                                                                            */
/*                                                         :::      ::::::::  */
/*  AForm.hpp                                            :+:      :+:    :+:  */
/*                                                     +:+ +:+         +:+    */
/*  By: mvelazqu <mvelazqu@student.42barcelona.c     +#+  +:+       +#+       */
/*                                                 +#+#+#+#+#+   +#+          */
/*  Created: 2024/12/21 17:50:54 by mvelazqu            #+#    #+#            */
/*  Updated: 2024/12/22 19:25:37 by mvelazqu           ###   ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include <stdexcept>
# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class	AForm
{
	public:
		virtual	~AForm( void );
		AForm( void );
		AForm( AForm const &obj );
		AForm( int grade );
		AForm( std::string name, int signGrade, int execGrade );

		std::string	getName( void ) const;
		bool		getIsSigned( void ) const;
		int			getSignGrade( void ) const;
		int			getExecGrade( void ) const;

		void				beSigned( Bureaucrat const &buro );
		void				execute( Bureaucrat const &executor ) const;

		virtual void		doExec( Bureaucrat const &executor ) const = 0;

		static void	checkThrowGrade( int grade );

		AForm	& operator = ( AForm const &obj );

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

	class	NotSignException: public std::exception
	{
		public:
			char const	*what( void ) const throw();
	};
};

std::ostream	& operator << ( std::ostream &out, AForm const &form );

#endif
