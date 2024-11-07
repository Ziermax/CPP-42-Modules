/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelazqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 22:23:49 by mvelazqu          #+#    #+#             */
/*   Updated: 2024/11/06 16:53:33 by mvelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

# include "Contact.class.hpp"

class	PhoneBook
{
	public:

		PhoneBook(void);
		~PhoneBook(void);
		
		void	addContact(void);
		void	searchContact(void);

	private:

		Contact	_contacts[8];
		void	_displayContacts(void) const;
		void	_displayContactInfo(int idx) const;
};

#endif
