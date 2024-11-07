/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelazqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 21:16:56 by mvelazqu          #+#    #+#             */
/*   Updated: 2024/10/21 18:56:33 by mvelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

# include <iostream>
# include "macros.h"

class Contact
{
	public:

		Contact(void);
		~Contact(void);

		bool		added;

		void		setFirstName(std::string fName);
		void		setLastName(std::string lName);
		void		setNickName(std::string nName);
		void		setPhoneNumber(std::string number);
		void		setDarkestSecret(std::string dSecret);

		std::string getFirstName(void) const;
		std::string getLastName(void) const;
		std::string getNickName(void) const;
		std::string	getPhoneNumber(void) const;
		std::string getDarkestSecret(void) const;

	private:

		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickName;
		std::string	_phoneNumber;
		std::string	_darkestSecret;
};

#endif
