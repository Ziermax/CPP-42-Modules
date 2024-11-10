/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelazqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 22:23:49 by mvelazqu          #+#    #+#             */
/*   Updated: 2024/11/10 16:20:49 by mvelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class	PhoneBook
{
	public:

		PhoneBook(void);
		~PhoneBook(void);
		
		int	addContact(void);
		int	searchContact(void);

	private:

		Contact	_contacts[8];
		int		_index;
		void	_displayContacts(void) const;
		void	_displayContactInfo(int idx) const;
		void	_printData(std::string str) const;
};

#endif
