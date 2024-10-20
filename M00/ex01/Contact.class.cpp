/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelazqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 21:19:22 by mvelazqu          #+#    #+#             */
/*   Updated: 2024/10/20 22:20:18 by mvelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

Contact::Contact(void)
{
	std::cout << BIG "Constructor called for Contact"DFT << std::endl;
	this->added = false;
	std::cout << "Setted added to false" << std::endl;
	std::cout << BCY "Constructor finished for Contact"DFT << std::endl;
}

Contact::~Contact(void)
{
	std::cout << BIR "Destructor called for Contact"DFT << std::endl;
	std::cout << RED "Destructor finished for Contact"DFT << std::endl;
}

void	Contact::setFirstName(std::string fName)
{
	this->_firstName = fName;
}

void	Contact::setLastName(std::string lName)
{
	this->_lastName = lName;
}

void	Contact::setNickName(std::string nName)
{
	this->_nickName = nName;
}

void	Contact::setPhoneNumber(int number)
{
	this->_phoneNumber = number;
}

void	Contact::setDarkestSecret(std::string dSecret)
{
	this->_darkestSecret = dSecret;
}

std::string Contact::getFirstName(void) const
{
	return (this->_firstName);
}

std::string Contact::getLastName(void) const
{
	return (this->_lastName);
}

std::string Contact::getNickName(void) const
{
	return (this->_nickName);
}

int Contact::getPhoneNumber(void) const
{
	return (this->_phoneNumber);
}

std::string Contact::getDarkestSecret(void) const
{
	return (this->_darkestSecret);
}
