/* ************************************************************************** */
/*                                                                            */
/*                                                         :::      ::::::::  */
/*  Base.hpp                                             :+:      :+:    :+:  */
/*                                                     +:+ +:+         +:+    */
/*  By: mvelazqu <mvelazqu@student.42barcelona.c     +#+  +:+       +#+       */
/*                                                 +#+#+#+#+#+   +#+          */
/*  Created: 2024/12/30 17:07:40 by mvelazqu            #+#    #+#            */
/*  Updated: 2025/02/15 18:48:39 by mvelazqu           ###   ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

# include <exception>

class Base
{
	public:
		virtual	~Base( void ) {};
};


Base	*generate( void );
void	identify( Base *p );
void	identify( Base &p );

#endif
