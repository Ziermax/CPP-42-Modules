/* ************************************************************************** */
/*                                                                            */
/*                                                         :::      ::::::::  */
/*  Array.hpp                                            :+:      :+:    :+:  */
/*                                                     +:+ +:+         +:+    */
/*  By: mvelazqu <mvelazqu@student.42barcelona.c     +#+  +:+       +#+       */
/*                                                 +#+#+#+#+#+   +#+          */
/*  Created: 2025/08/04 19:55:48 by mvelazqu            #+#    #+#            */
/*  Updated: 2025/08/04 20:35:27 by mvelazqu           ###   ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

template < class T >
class	Array
{
	public:
		~Array< T >( void );
		Array< T >( void );
		Array< T >( unsigned int size );
		Array< T >( Array const &obj );

		Array< T >	& operator = ( Array const &obj );
		T			& operator [] ( unsigned int idx );

		unsigned int	size( void ) const;
		//void			assign(unsigned int idx, T ass);

	private:
		T				*_data;
		unsigned int	_size;
};

#include <stdexcept>

template < class T >
Array< T >::~Array(void)
{
	delete [] _data;
}

template < class T >
Array< T >::Array(void): _data(NULL), _size(0)
{
	return ;
}

template < class T >
Array< T >::Array(unsigned int size): _data(new T[size]), _size(size)
{
	for (unsigned int i = 0; i < _size; ++i)
	{
		_data[i] = T();
	}
}

template < class T >
Array< T >::Array(Array const &obj): _data(NULL), _size(0)
{
	this->operator =(obj);
}

template < class T >
Array< T >	&Array< T >:: operator = (Array const &obj)
{
	if (this != &obj)
	{
		delete [] _data;
		_data = new T[obj._size];
		_size = obj._size;
		for (unsigned int i = 0; i < _size; ++i)
		{
			_data[i] = obj._data[i];
		}
	}
}

template < class T >
T	&Array< T >:: operator [] (unsigned int idx)
{
	if (idx >= _size)
		throw (std::out_of_range("To high"));
	return (_data[idx]);
}

template < class T >
unsigned int	Array< T >::size(void) const
{
	return (_size);
}

/*
template < class T >
void	Array< T >::assign(unsigned int idx, T ass)
{
	operator [] (idx) = ass;
}*/

#endif
