/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelazqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 18:10:02 by mvelazqu          #+#    #+#             */
/*   Updated: 2024/11/13 19:54:20 by mvelazqu         ###   ########.fr       */
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

void	Harl::filter(std::string level)
{
	int	data;

	data = DEBUG;
	while (data <= ERROR)
	{
		if (_levels[data] == level)
			break ;
		data++;
	}
	switch (data)
	{
		case DEBUG:
			_debug();
		case INFO:
			_info();
		case WARNING:
			_warning();
		case ERROR:
			_error();
			break ;
		default:
			_noComplain();
	}
}

void	Harl::_debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl
		<< "Harl debug message" << std::endl << std::endl;
}

void	Harl::_info(void)
{
	std::cout << "[ INFO ]" << std::endl
		<< "Harl info message" << std::endl << std::endl;
}

void	Harl::_warning(void)
{
	std::cout << "[ WARNING ]" << std::endl
		<< "Harl warning message" << std::endl << std::endl;
}

void	Harl::_error(void)
{
	std::cout << "[ ERROR ]" << std::endl
		<< "Harl error message" << std::endl << std::endl;
}

void	Harl::_noComplain(void)
{
	std::cout << "[ No Complain ]" << std::endl
		<< "Harl is not complaining" << std::endl << std::endl;
}
