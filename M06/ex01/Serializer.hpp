/* ************************************************************************** */
/*                                                                            */
/*                                                         :::      ::::::::  */
/*  Serializer.hpp                                       :+:      :+:    :+:  */
/*                                                     +:+ +:+         +:+    */
/*  By: mvelazqu <mvelazqu@student.42barcelona.c     +#+  +:+       +#+       */
/*                                                 +#+#+#+#+#+   +#+          */
/*  Created: 2024/12/29 16:05:14 by mvelazqu            #+#    #+#            */
/*  Updated: 2024/12/29 17:27:27 by mvelazqu           ###   ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <stdint.h>

typedef struct s_data
{
	int			i;
	char const	*str;
	void		*next;
}	Data;

class	Serializer
{
	public:
		Serializer( void );
		Serializer( Serializer const &obj );

		static uintptr_t	serialize( Data *ptr );
		static Data			*deserialize( uintptr_t raw );

		Serializer	& operator = ( Serializer const &obj );

	protected:
		~Serializer( void );
};

#endif
