/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelazqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 14:22:00 by mvelazqu          #+#    #+#             */
/*   Updated: 2024/11/22 17:41:35 by mvelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::~ClapTrap(void)
{
	return ;
}

ClapTrap::ClapTrap(void):
	_name("Claptrap"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	return ;
}

ClapTrap::ClapTrap(std::string name):
	_name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	return ;
}

ClapTrap::ClapTrap(ClapTrap const &obj)
{
	*this = obj;
}

void	ClapTrap::attack(std::string const &target)
{
	if (!_hitPoints)
		return (_deathMessage());
	if (_energyPoints)
		std::cout << _name << " is attacking " << target << ", causing "
			<< _attackDamage << " points of damage" << std::endl;
	else
		std::cout << _name << " has no energy to attack "
			<< target << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (!_hitPoints)
		return (_deathMessage());
	std::cout << _name << " has taken " << amount << " damage" << std::endl;
	if (_hitPoints <= amount)
	{
		std::cout << _name << " is dead now" << std::endl;
		_hitPoints = 0;
		return ;
	}
	_hitPoints -= amount;
}

void	ClapTrap::beRepair(unsigned int amount)
{
	if (!_hitPoints)
	{
		std::cout << _name << " is damage beyond repair" << std::endl;
		return ;
	}
	_hitPoints += amount;
	std::cout << _name << " has been repair " << amount
		<< " hit points,  is now " << _hitPoints << " hit points" << std::endl;
}

void	ClapTrap::setName(std::string name)
{
	_name = name;
}

void	ClapTrap::setAttackDamage(unsigned int amount)
{
	_attackDamage = amount;
}

std::string	ClapTrap::getName(void) const
{
	return (_name);
}

unsigned int	ClapTrap::getHitPoints(void) const
{
	return (_hitPoints);
}

unsigned int	ClapTrap::getAttackDamage(void) const
{
	return (_attackDamage);
}

void	ClapTrap::_deathMessage(void)
{
	std::cout << _name << " is death" << std::endl;
}

ClapTrap	&ClapTrap:: operator = (ClapTrap const &obj)
{
	if (this != &obj)
	{
		_name = obj._name;
		_hitPoints = obj._hitPoints;
		_energyPoints = obj._energyPoints;
		_attackDamage = obj._attackDamage;
	}
	return (*this);
}
