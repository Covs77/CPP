/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cova <cova@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 20:33:40 by cova              #+#    #+#             */
/*   Updated: 2025/07/22 20:33:41 by cova             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iomanip>
#include <ctime>
#include <iostream>
#include "Account.hpp"


int Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(void){}


static int	getNbAccounts( void )
{
    return (Account::_nbAccounts);
}
	static int	getTotalAmount( void );
	static int	getNbDeposits( void );
	static int	getNbWithdrawals( void );
	static void	displayAccountsInfos( void );