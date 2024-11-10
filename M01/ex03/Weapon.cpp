/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelazqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 16:46:48 by mvelazqu          #+#    #+#             */
/*   Updated: 2024/11/10 17:16:53 by mvelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void): _type("Bear hand")
{
	return ;
}

Weapon::Weapon(std::string type): _type(type)
{
	return ;
}

Weapon::~Weapon(void)
{
	return ;
}
void	Weapon::setType(std::string type)
{
	_type = type;
}

std::string	const &Weapon::getType(void) const
{
	return (this->_type);
}
