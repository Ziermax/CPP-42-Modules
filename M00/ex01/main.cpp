/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelazqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 22:04:49 by mvelazqu          #+#    #+#             */
/*   Updated: 2024/11/10 16:22:48 by mvelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

void	start_phonebook(void)
{
	PhoneBook	phbook;
	std::string	word;

	while (word != "EXIT")
	{
		word = "";
		while (word.empty())
		{
			std::cout << BIG << "Waiting for word..." << std::endl << DFT
				<< "Word: ";
			std::getline(std::cin, word);
			if (std::cin.eof())
			{
				std::cerr << std::endl;
				std::cerr << "End of input detected. Exiting ..." << std::endl;
				return ;
			}
		}
		if (word == "ADD" && phbook.addContact())
			return ;
		else if (word == "SEARCH" && phbook.searchContact())
			return ;
	}
}

int	main(int argc, char **argv)
{
	(void)argv;
	if (argc != 1)
		return (1);
	start_phonebook();
}
