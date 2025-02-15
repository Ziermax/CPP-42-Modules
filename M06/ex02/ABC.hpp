/* ************************************************************************** */
/*                                                                            */
/*                                                         :::      ::::::::  */
/*  ABC.hpp                                              :+:      :+:    :+:  */
/*                                                     +:+ +:+         +:+    */
/*  By: mvelazqu <mvelazqu@student.42barcelona.c     +#+  +:+       +#+       */
/*                                                 +#+#+#+#+#+   +#+          */
/*  Created: 2024/12/30 17:06:48 by mvelazqu            #+#    #+#            */
/*  Updated: 2025/02/15 16:11:14 by mvelazqu           ###   ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#ifndef ABC_HPP
# define ABC_HPP

# include "Base.hpp"

//class	Base;

class	A: public Base
{
//	~A	( void ) {};
	public:
		int	a;
};

class	B: public Base
{
//	~B	( void ) {};
	public:
		char	b;
};

class	C: public Base
{
//	~C	( void ) {};
	public:
		long	c;
};

#endif
