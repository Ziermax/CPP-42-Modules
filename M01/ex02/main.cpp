/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelazqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 15:47:30 by mvelazqu          #+#    #+#             */
/*   Updated: 2024/11/10 15:56:28 by mvelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string stringVAR;
	std::string *stringPTR;
	/*	*
	 *	A reference has to initialize at declaration
	 */
	std::string &stringREF = stringVAR;

	stringVAR =  "HI THIS IS BRAIN";
	stringPTR = &stringVAR;

	std::cout << "Address of stringVAR: " << &stringVAR << std::endl;
	std::cout << "Address of stringPTR: " << stringPTR << std::endl;
	std::cout << "Address of stringREF: " << &stringREF << std::endl;

	std::cout << "StringVAR: " << stringVAR << std::endl;
	std::cout << "StringPTR: " << *stringPTR << std::endl;
	std::cout << "StringREF: " << stringREF << std::endl;
}
