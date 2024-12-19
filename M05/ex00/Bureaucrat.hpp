/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelazqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 20:36:23 by mvelazqu          #+#    #+#             */
/*   Updated: 2024/12/19 12:24:01 by mvelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <stdexcept>

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

		Bureaucrat	& operator = ( Bureaucrat const &obj );

	private:
		std::string const	_name;
		int					_grade;
		static int			holaMundo;

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
