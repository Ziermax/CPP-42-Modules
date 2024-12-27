/* ************************************************************************** */
/*                                                                            */
/*                                                         :::      ::::::::  */
/*  Intern.hpp                                           :+:      :+:    :+:  */
/*                                                     +:+ +:+         +:+    */
/*  By: mvelazqu <mvelazqu@student.42barcelona.c     +#+  +:+       +#+       */
/*                                                 +#+#+#+#+#+   +#+          */
/*  Created: 2024/12/26 16:59:37 by mvelazqu            #+#    #+#            */
/*  Updated: 2024/12/27 19:07:19 by mvelazqu           ###   ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include "ShrubberyCreationForm.hpp"
# include "AForm.hpp"

# define MAX_FORMS 3

class	Intern
{
	public:
		~Intern( void );
		Intern( void );
		Intern( Intern const &obj );

		AForm	*makeForm( std::string form, std::string target );

		Intern	& operator = ( Intern const &obj );

	private:
		static int const			_numForms;
		static std::string const	_forms[MAX_FORMS];
		static AForm	*makeShrubberyCreationForm( std::string target );
		static AForm	*(*_formConstruct[MAX_FORMS])(std::string);
};

#endif
