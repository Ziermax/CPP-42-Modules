/* ************************************************************************** */
/*                                                                            */
/*                                                         :::      ::::::::  */
/*  ShrubberyCreationForm.hpp                            :+:      :+:    :+:  */
/*                                                     +:+ +:+         +:+    */
/*  By: mvelazqu <mvelazqu@student.42barcelona.c     +#+  +:+       +#+       */
/*                                                 +#+#+#+#+#+   +#+          */
/*  Created: 2024/12/22 17:28:40 by mvelazqu            #+#    #+#            */
/*  Updated: 2025/07/21 15:12:57 by mvelazqu           ###   ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "AForm.hpp"

class	ShrubberyCreationForm: public AForm
{
	public:
		~ShrubberyCreationForm( void );
		ShrubberyCreationForm( void );
		ShrubberyCreationForm( std::string name, std::string target );
		ShrubberyCreationForm( ShrubberyCreationForm const &obj );

		void	doExec( Bureaucrat const &executor ) const;

		ShrubberyCreationForm	& operator =
			(ShrubberyCreationForm const &obj );
};

#endif
