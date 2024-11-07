/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelazqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 22:43:52 by mvelazqu          #+#    #+#             */
/*   Updated: 2024/11/07 10:20:27 by mvelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"
#include <iostream>
#include <cstdlib>

PhoneBook::PhoneBook(void)
{
	std::cout << BIG "Constructor called for PhoneBook"DFT << std::endl;
	std::cout << BCY "Constructor finished for PhoneBook"DFT << std::endl;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << BIR "Destructor called for PhoneBook"DFT << std::endl;
	std::cout << RED "Destructor finished for PhoneBook"DFT << std::endl;
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
			return (ret);
		}
	}
	return (ret);
}

void	PhoneBook::addContact(void)
{
	static int	i;
	std::string	aux[5];

	aux[0] = getString("name");
	if (aux[0].empty())
		return ;
	aux[1] = getString("lastname");
	if (aux[1].empty())
		return ;
	aux[2] = getString("nickname");
	if (aux[2].empty())
		return ;
	aux[3] = getString("phonenumber");
	if (aux[3].empty())
		return ;
	aux[4] = getString("darkest secret");
	if (aux[4].empty())
		return ;
	this->_contacts[i].setFirstName(aux[0]);
	this->_contacts[i].setLastName(aux[1]);
	this->_contacts[i].setNickName(aux[2]);
	this->_contacts[i].setPhoneNumber(aux[3]);
	this->_contacts[i].setDarkestSecret(aux[4]);
	this->_contacts[i].added = true;
	i = (i + 1) % 8;
}

void	PhoneBook::searchContact(void)
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
			return ;
		}
	}
	this->_displayContactInfo(std::atoi(input.c_str()) - 1);
}

void	PhoneBook::_displayContacts(void) const
{
	Contact	current;
	int		i;

	i = 0;
	std::cout << BIR << "Starting List of Contacts" << DFT << std::endl;
	while (i < 8 && this->_contacts[i].added)
	{
		current = this->_contacts[i];
		std::cout << "Namee: " << current.getFirstName() << std::endl;
		i++;
	}
	std::cout << BIR << "Finished Contact Listing" << DFT << std::endl;
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
