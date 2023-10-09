#include <iostream>
#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts( void )
{
	return (-1); // TODO: 
}

int	Account::getTotalAmount( void )
{
	return (-1); // TODO: 
}

int	Account::getNbDeposits( void )
{
	return (-1); // TODO: 
}

int	Account::getNbWithdrawals( void )
{
	return (-1); // TODO: 
}


void	Account::displayAccountsInfos( void )
{
	// TODO: 
}

Account::Account( int initial_deposit )
{
	Account::_displayTimestamp();

	this->_accountIndex = Account::_nbAccounts;
	this->_amount = initial_deposit;
	this->_nbDeposits = 1;
	this->_nbWithdrawals = 0;

	Account::_nbAccounts++;
	Account::_totalAmount += initial_deposit;
	Account::_totalNbDeposits++;
	
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";amount:" << initial_deposit;
	std::cout << ";created" << std::endl;
}

Account::~Account( void )
{
	// TODO: 
}

void	Account::makeDeposit( int deposit )
{
	// TOOD: 
}

bool	Account::makeWithdrawal( int withdrawal )
{
	// TODO:
	return (false);
}

int		Account::checkAmount( void ) const
{
	// TODO: 
	return (-1);
}

void	Account::displayStatus( void ) const
{
	// TODO:
}

void	Account::_displayTimestamp( void )
{
	// FIXME: Fake timestamp
	std::cout << "[19920104_091532] ";
}

Account::Account( void )
{
	// TODO: 
}
