/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelazqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 18:43:44 by mvelazqu          #+#    #+#             */
/*   Updated: 2024/11/13 20:09:22 by mvelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv)
{
	Harl	harlJob;

	if (argc != 2)
		return (std::cerr << "Wrong number of arguments" << std::endl,1);
	harlJob.filter(argv[1]);
	return (0);
}
