/* ************************************************************************** */
/*                                                                            */
/*                                                         :::      ::::::::  */
/*  whatever.hpp                                         :+:      :+:    :+:  */
/*                                                     +:+ +:+         +:+    */
/*  By: mvelazqu <mvelazqu@student.42barcelona.c     +#+  +:+       +#+       */
/*                                                 +#+#+#+#+#+   +#+          */
/*  Created: 2025/07/23 19:38:30 by mvelazqu            #+#    #+#            */
/*  Updated: 2025/08/04 18:50:30 by mvelazqu           ###   ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template < typename Type >
void	swap(Type &a, Type &b)
{
	Type tmp;

	tmp = b;
	b = a;
	a = tmp;
}

template < typename T >
T	min(T &a, T &b)
{
	if (a < b)
		return (a);
	return (b);
}

template < typename dis >

dis	max(dis &a, dis &b)
{
	dis	nuts;//Magic line

	if (a > b)
		nuts = a;
	else
		nuts = b;
	return (nuts);
}

#endif
