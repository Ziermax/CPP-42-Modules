/* ************************************************************************** */
/*                                                                            */
/*                                                         :::      ::::::::  */
/*  Bureaucrat.hpp                                       :+:      :+:    :+:  */
/*                                                     +:+ +:+         +:+    */
/*  By: mvelazqu <mvelazqu@student.42barcelona.c     +#+  +:+       +#+       */
/*                                                 +#+#+#+#+#+   +#+          */
/*  Created: 2024/12/21 17:51:13 by mvelazqu            #+#    #+#            */
/*  Updated: 2024/12/21 18:06:45 by mvelazqu           ###   ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <stdexcept>
# include "Form.hpp"

class	Form;

class	Bureaucrat
{
	public:
		~Bureaucrat( void );
		Bureaucrat( void );
		Bureaucrat( Bureaucrat const &obj );
		Bureaucrat( std::string name, int grade );

		std::string	getName( void ) const;
		int			getGrade( void ) const;
		void		incrementGrade( void );
		void		decrementGrade( void );
		void		signForm( Form &form ) const;
		static void	checkThrowGrade( int grade );

		Bureaucrat	& operator = ( Bureaucrat const &obj );

	private:
		std::string const	_name;
		int					_grade;

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
//		private: (in exception derived)
//			char const	*_whatArg;
//			Not necesary because you already have it
//			 when you inherit exception (exception doesn't even have that :c)

std::ostream	& operator << ( std::ostream &out, Bureaucrat const &buro );

#endif
