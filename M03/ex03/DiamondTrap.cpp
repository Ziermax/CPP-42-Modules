/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelazqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 17:37:39 by mvelazqu          #+#    #+#             */
/*   Updated: 2024/11/26 18:56:55 by mvelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::~DiamondTrap(void)
{
	std::cout << _name << " <Diamond> has been destructed" << std::endl;
	return ;
}

DiamondTrap::DiamondTrap(void):
	ClapTrap("DiamondTrap_clap_name"),
	_name("DiamondTrap"), _clapName(ClapTrap::_name)
{
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 30;
	std::cout << _name << " <Diamond> has been void constructed" << std::endl;
	return ;
}

DiamondTrap::DiamondTrap(DiamondTrap const &obj):
	ClapTrap(obj), _clapName(ClapTrap::_name)
{
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 30;
	std::cout << _name << " <Diamond> has been copy constructed" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name):
	ClapTrap(name + std::string("_clap_name")),
	_name(name), _clapName(ClapTrap::_name)
{
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 30;
	std::cout << _name << " <Diamond> has been name constructed" << std::endl;
	return ;
}

void	DiamondTrap::setClapName(std::string name)
{
	_clapName = name + std::string("_clap_name");
}
void	DiamondTrap::whoAmI(void) const
{
	std::cout << _name << " <Diamond> name is: " << _name << std::endl
		<< "And its clapName is: " << _clapName << std::endl;
}

DiamondTrap	&DiamondTrap:: operator = (DiamondTrap const &obj)
{
	if (this != &obj)
	{
		ClapTrap:: operator = (obj);
		_name = obj._name;
	}
	return (*this);
}
