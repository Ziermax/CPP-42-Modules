/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelazqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 21:19:22 by mvelazqu          #+#    #+#             */
/*   Updated: 2024/11/06 16:53:18 by mvelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

Contact::Contact(void)
{
	this->added = false;
}

Contact::~Contact(void)
{
	return ;
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

void	Contact::setPhoneNumber(std::string number)
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

std::string	Contact::getPhoneNumber(void) const
{
	return (this->_phoneNumber);
}

std::string Contact::getDarkestSecret(void) const
{
	return (this->_darkestSecret);
}
