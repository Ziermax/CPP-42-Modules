/* ************************************************************************** */
/*                                                                            */
/*                                                         :::      ::::::::  */
/*  iter.hpp                                             :+:      :+:    :+:  */
/*                                                     +:+ +:+         +:+    */
/*  By: mvelazqu <mvelazqu@student.42barcelona.c     +#+  +:+       +#+       */
/*                                                 +#+#+#+#+#+   +#+          */
/*  Created: 2025/08/04 18:59:37 by mvelazqu            #+#    #+#            */
/*  Updated: 2025/08/04 19:48:49 by mvelazqu           ###   ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

template < typename T >//, int N, typename fun>
void	iter(T *arr, int size, void (*fun)(T &))
{
	for (int i = 0; i < size; ++i)
	{
		fun(arr[i]);
	}
}

template < typename TConst >
void	iter(TConst const *arr, int size, void (*fun)(TConst const &))
{
	for (int i = 0; i < size; ++i)
	{
		fun(arr[i]);
	}
}

#endif
