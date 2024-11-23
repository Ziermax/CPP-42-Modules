/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelazqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 17:44:30 by mvelazqu          #+#    #+#             */
/*   Updated: 2024/11/23 14:55:46 by mvelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::~ScavTrap(void)
{
	std::cout << _name << " <ScavTrap> has been destructed" << std::endl;
	return ;
}

ScavTrap::ScavTrap(void): ClapTrap()
// Inherit attributes cannot be initialize in constructor like: var(value)
{
	_name = "ScavTrap";
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << _name << " <ScavTrap> has been void constructed" << std::endl;
	return ;
}

ScavTrap::ScavTrap(ScavTrap const &obj):ClapTrap(obj)
{
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << _name << " <ScavTrap> has been copy constructed" << std::endl;
	*this = obj;
}

ScavTrap::ScavTrap(std::string name):ClapTrap(name)
{
	_name = name;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << _name << " <ScavTrap> has been named constructed" << std::endl;
	return ;
}

void	ScavTrap::guardGate(void) const
{
	std::cout << _name << " is now in guard gate mode" << std::endl;
}

ScavTrap	&ScavTrap:: operator = (ScavTrap const &obj)
{
	if (this != &obj)
	{
		ClapTrap:: operator = (obj);
	}
	return (*this);
}
