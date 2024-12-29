/* ************************************************************************** */
/*                                                                            */
/*                                                         :::      ::::::::  */
/*  Serializer.cpp                                       :+:      :+:    :+:  */
/*                                                     +:+ +:+         +:+    */
/*  By: mvelazqu <mvelazqu@student.42barcelona.c     +#+  +:+       +#+       */
/*                                                 +#+#+#+#+#+   +#+          */
/*  Created: 2024/12/29 16:05:16 by mvelazqu            #+#    #+#            */
/*  Updated: 2024/12/29 17:26:41 by mvelazqu           ###   ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::~Serializer(void)
{
	return ;
}

Serializer::Serializer(void)
{
	return ;
}

Serializer::Serializer(Serializer const &obj)
{
	*this = obj;
}

uintptr_t	Serializer::serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data	*Serializer::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

Serializer	&Serializer:: operator = (Serializer const &obj)
{
	if (this != &obj)
	{
	}
	return (*this);
}
