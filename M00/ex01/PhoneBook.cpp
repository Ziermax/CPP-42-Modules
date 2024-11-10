/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelazqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 22:43:52 by mvelazqu          #+#    #+#             */
/*   Updated: 2024/11/10 16:25:55 by mvelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <cstdlib>

PhoneBook::PhoneBook(void): _index(0)
{
	std::cout << BIG "Constructor called for PhoneBook"DFT << std::endl;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << BIR "Destructor called for PhoneBook"DFT << std::endl;
}

static std::string	getString(std::string info)
{
	std::string	ret;

	while (ret.empty())
	{
		std::cout << BCY << "Type contact " << info << ": " << DFT;
		std::getline(std::cin, ret);
		if (std::cin.eof())
		{
			std::cerr << std::endl;
			std::cerr << "End of input detected. Exiting ..." << std::endl;
			return ("");
		}
	}
	return (ret);
}

int	PhoneBook::addContact(void)
{
	static int	i;
	std::string	aux[5];

	aux[0] = getString("name");
	if (std::cin.eof())
		return (1);
	aux[1] = getString("lastname");
	if (std::cin.eof())
		return (1);
	aux[2] = getString("nickname");
	if (std::cin.eof())
		return (1);
	aux[3] = getString("phonenumber");
	if (std::cin.eof())
		return (1);
	aux[4] = getString("darkest secret");
	if (std::cin.eof())
		return (1);
	this->_contacts[i].setFirstName(aux[0]);
	this->_contacts[i].setLastName(aux[1]);
	this->_contacts[i].setNickName(aux[2]);
	this->_contacts[i].setPhoneNumber(aux[3]);
	this->_contacts[i].setDarkestSecret(aux[4]);
	this->_contacts[i].added = true;
	i = (i + 1) % 8;
	_index++;
	return (0);
}

int	PhoneBook::searchContact(void)
{
	std::string	input;

	this->_displayContacts();
	while (input.empty())
	{
		std::cout  << BBL << "Right the number for the contact u looking for: "
			<< DFT;
		std::getline(std::cin, input);
		if (std::cin.eof())
		{
			std::cerr << std::endl;
			std::cerr << "End of input detected. Exiting ..." << std::endl;
			return (1);
		}
	}
	this->_displayContactInfo(std::atoi(input.c_str()) - 1);
	return (0);
}

void	PhoneBook::_displayContacts(void) const
{
	Contact	current;
	int		i;

	if (!this->_index)
	{
		std::cout << std::endl << "There is no data to display!"
			<< std::endl << std::endl;
		return ;
	}
	std::cout << " ___________________________________________" << std::endl;
	std::cout << "|     Index|First name| Last name|  Nickname|" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	i = 0;
	while (i < 8 && this->_contacts[i].added)
	{
		current = this->_contacts[i];
		std::cout << "|         " << i + 1 << "|";
		_printData(current.getFirstName());
		_printData(current.getLastName());
		_printData(current.getNickName());
		std::cout << std::endl;
		i++;
	}
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	std::cout << "|-------------------------------------------|"
		<< std::endl << std::endl;
}

void	PhoneBook::_displayContactInfo(int idx) const
{
	Contact	info;

	if (idx >= 8 || idx < 0 || !this->_contacts[idx].added)
	{
		std::cout << RED << "Contact not in range bruh" << DFT << std::endl;
		return ;
	}
	info = this->_contacts[idx];
	std::cout << "Contact INFO" << std::endl << "Contact name: "
		<< info.getFirstName() << std::endl << "Contact lastname: "
		<< info.getLastName() << std::endl << "Contact nickname: "
		<< info.getNickName() << std::endl << "Contact PhoneNum: "
		<< info.getPhoneNumber() << std::endl << "Contact Darkest: "
		<< info.getDarkestSecret() << std::endl;
}

void	PhoneBook::_printData(std::string str) const
{
	int			length;

	length = str.length();
	if (length > 10)
		std::cout << str.substr(0, 9) << ".";
	else
	{
		std::string	space(10 - length, ' ');
		std::cout << space << str;
	}
	std::cout << "|";
	return ;
}
