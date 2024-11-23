/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelazqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 22:28:54 by mvelazqu          #+#    #+#             */
/*   Updated: 2024/11/23 23:22:20 by mvelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::~FragTrap(void)
{
	std::cout << _name << " <FragTrap> has been destructed" << std::endl;
	return ;
}

FragTrap::FragTrap(void): ClapTrap()
{
	_name = "FragTrap";
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << _name << " <FragTrap> has been void constructed" << std::endl;
	return ;
}

FragTrap::FragTrap(FragTrap const &obj): ClapTrap(obj)
{
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << _name << " <FragTrap> has been copy constructed" << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << _name << " <FragTrap> has been named constructed" << std::endl;
}

void	FragTrap::highFivesGuys(void) const
{
	std::cout << _name << " is asking for a positive hight five" << std::endl;
}

FragTrap	&FragTrap:: operator = (FragTrap const &obj)
{
	if (this != &obj)
	{
		ClapTrap:: operator = (obj);
	}
	std::cout << _name << " <FragTrap> is copy assignating: " << obj.getName()
		<< std::endl;
	return (*this);
}
