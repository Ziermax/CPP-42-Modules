/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelazqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 17:53:43 by mvelazqu          #+#    #+#             */
/*   Updated: 2024/11/30 17:53:44 by mvelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"

ICharacter::~ICharacter(void)
{
	return ;
}

ICharacter::ICharacter(void)
{
	return ;
}

ICharacter::ICharacter(ICharacter const &obj)
{
	*this = obj;
}

ICharacter	&ICharacter:: operator = (ICharacter const &obj)
{
	if (this != &obj)
	{
	}
	return (*this);
}
