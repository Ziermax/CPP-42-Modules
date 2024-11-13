/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelazqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 18:10:02 by mvelazqu          #+#    #+#             */
/*   Updated: 2024/11/13 18:55:03 by mvelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
	_comments[DEBUG] = &Harl::_debug;
	_levels[DEBUG] = "DEBUG";
	_comments[INFO] = &Harl::_info;
	_levels[INFO] = "INFO";
	_comments[WARNING] = &Harl::_warning;
	_levels[WARNING] = "WARNING";
	_comments[ERROR] = &Harl::_error;
	_levels[ERROR] = "ERROR";
}

Harl::~Harl(void)
{
	return ;
}

void	Harl::complain(std::string level)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (_levels[i] == level)
		{
			(this->*(_comments[i]))();
			break ;
		}
		i++;
	}
}

void	Harl::_debug(void)
{
	std::cout << "Harl debug message" << std::endl;
}

void	Harl::_info(void)
{
	std::cout << "Harl info message" << std::endl;
}

void	Harl::_warning(void)
{
	std::cout << "Harl info warning" << std::endl;
}

void	Harl::_error(void)
{
	std::cout << "Harl info error" << std::endl;
}
