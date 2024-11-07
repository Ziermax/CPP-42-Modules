/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelazqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 02:05:07 by mvelazqu          #+#    #+#             */
/*   Updated: 2024/11/07 02:31:31 by mvelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

Account::Account( int initial_deposit )
{
}

/* ????????????????????????????????????? */
Account::~Account( void )
{
}

static int	Account::getNbAccounts( void )
{
	return (_nbAccounts);
}

static int	Account::getTotalAmount( void )
{
	return (_totalAmount);
}

static int	Account::getNbDeposits( void )
{
	return (_totalNbDeposits);
}

static int	Account::getNbWithdrawals( void )
{
	return (_totalNbWithdrawals);
}

static void	Account::displayAccountsInfos( void )
{
	std::cout << "Total Amount: " << this->getTotalAmount() << std::endl
		<< "Number of Deposits" << this->getNbDeposits() << std::endl
		<< "Number of Withdraws" << this->getNbWithdrawals() << std::endl;
}


void	Account::makeDeposit( int deposit )
{
	_totalAmount += deposit;
	_nbDeposits++;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	_totalAmount -= withdrawal;
	_nbWithdrawals++;
}

/* ????????????????????????????????????? */
int		Account::checkAmount( void ) const
{
	return (_amount);
}

/* ????????????????????????????????????? */
void	Account::displayStatus( void ) const
{
}

/* ????????????????????????????????????? */
static void	Account::_displayTimestamp( void )
{
}
