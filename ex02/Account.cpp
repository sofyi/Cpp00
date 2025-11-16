/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 10:47:12 by slamhaou          #+#    #+#             */
/*   Updated: 2025/11/16 10:12:45 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <chrono>
#include <ctime>

 int	Account::_nbAccounts = 0;
 int	Account::_totalAmount = 0;
 int	Account::_totalNbDeposits = 0;
 int	Account::_totalNbWithdrawals = 0; 
 
int Account::getNbAccounts( void )
{
	return _nbAccounts;
}
int	Account::getTotalAmount( void )
{
	return _totalAmount;
}
int	Account::getNbDeposits( void )
{
	return _totalNbDeposits;
}
int	Account::getNbWithdrawals( void )
{
	return _totalNbWithdrawals;
}
// void	displayAccountsInfos( void )
// {
		
// }
void GetExactTime(void)
{


#include <ctime>
#include <iostream>

time_t now;
time(&now);
char* dt = ctime(&now);

std::cout << "Current date and time: " << dt << std::endl;
	std::cout<<"[";
	std::cout<<"]";
	exit(0);
}
Account::~Account( void )
{
	GetExactTime();
	std::cout<< "index:"<<_accountIndex<<";amount:"<<_amount<<";closed"<<std::endl;
}
Account::Account(int initial_deposit)
{
	_amount = initial_deposit;
	_accountIndex = 0;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	GetExactTime();
	std::cout<< "index:"<< _nbAccounts++ <<";amount:" << _amount<<";created"<< std::endl;
}