/* ************************************************************************** */
/*                                                                            */
/*                                                         :::      ::::::::  */
/*  easyfind.hpp                                         :+:      :+:    :+:  */
/*                                                     +:+ +:+         +:+    */
/*  By: mvelazqu <mvelazqu@student.42barcelona.c     +#+  +:+       +#+       */
/*                                                 +#+#+#+#+#+   +#+          */
/*  Created: 2025/08/12 17:44:29 by mvelazqu            #+#    #+#            */
/*  Updated: 2025/08/13 21:33:37 by mvelazqu           ###   ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <stdexception>

template < typename T >
T::const_iterator	easyfind( T const &obj, int val )
{
	T;;const_iterator	it;

	it = std::find(obj.begin(), obj.end(), val);
	if (it == obj.end())
		throw (std::invalid_argument("Not Found"));
	return (it);
}


#endif
