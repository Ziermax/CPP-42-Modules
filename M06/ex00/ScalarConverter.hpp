/* ************************************************************************** */
/*                                                                            */
/*                                                         :::      ::::::::  */
/*  ScalarConverter.hpp                                  :+:      :+:    :+:  */
/*                                                     +:+ +:+         +:+    */
/*  By: mvelazqu <mvelazqu@student.42barcelona.c     +#+  +:+       +#+       */
/*                                                 +#+#+#+#+#+   +#+          */
/*  Created: 2024/12/22 20:03:04 by mvelazqu            #+#    #+#            */
/*  Updated: 2025/07/23 19:07:51 by mvelazqu           ###   ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <string>

enum e_type
{
	INVALID,
	CHAR,
	INT,
	FLOAT,
	DOUBLE,
	NAN_VAL,
	INF
};

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

	private:
		static void	convertToDouble( double value, int type );
		static void	convertToFloat( double value, int type );
		static void	convertToInt( double value, int type );
		static void	convertToChar( double value, int type );
		static int	parser( std::string str );

};

#endif
