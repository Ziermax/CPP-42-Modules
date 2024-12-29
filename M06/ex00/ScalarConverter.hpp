/* ************************************************************************** */
/*                                                                            */
/*                                                         :::      ::::::::  */
/*  ScalarConverter.hpp                                  :+:      :+:    :+:  */
/*                                                     +:+ +:+         +:+    */
/*  By: mvelazqu <mvelazqu@student.42barcelona.c     +#+  +:+       +#+       */
/*                                                 +#+#+#+#+#+   +#+          */
/*  Created: 2024/12/22 20:03:04 by mvelazqu            #+#    #+#            */
/*  Updated: 2024/12/27 19:39:33 by mvelazqu           ###   ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>

class	ScalarConverter
{
	public:
	/*	*
	 *	Abstract Class are not instantiable
		virtual	~ScalarConverter( void ) = 0;	abstract class	*/
		ScalarConverter( void );
		ScalarConverter( ScalarConverter const &obj );

		static void	convert( std::string input );

		ScalarConverter	& operator = ( ScalarConverter const &obj );
	/*	*
	 *	Making protected destructor disables instantiation	*/
	protected:
		~ScalarConverter( void );
};

#endif
