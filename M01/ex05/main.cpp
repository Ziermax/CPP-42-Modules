/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelazqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 18:43:44 by mvelazqu          #+#    #+#             */
/*   Updated: 2024/11/13 19:00:06 by mvelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl	harlJob;

	harlJob.complain("DEBUG");
	harlJob.complain("ERROR");
	harlJob.complain("WARNING");
	harlJob.complain("INFO");
	harlJob.complain("NADA");
	harlJob.complain("DEBUG");
}
