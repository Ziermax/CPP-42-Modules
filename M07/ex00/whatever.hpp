/* ************************************************************************** */
/*                                                                            */
/*                                                         :::      ::::::::  */
/*  whatever.hpp                                         :+:      :+:    :+:  */
/*                                                     +:+ +:+         +:+    */
/*  By: mvelazqu <mvelazqu@student.42barcelona.c     +#+  +:+       +#+       */
/*                                                 +#+#+#+#+#+   +#+          */
/*  Created: 2025/07/23 19:38:30 by mvelazqu            #+#    #+#            */
/*  Updated: 2025/07/23 20:29:45 by mvelazqu           ###   ########.fr      */
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
	a = tmp
}

#endif
