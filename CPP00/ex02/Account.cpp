#include "Account.hpp"

#include <ctime>
#include <iomanip>
#include <iostream>

using namespace std;

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initialDeposit) :
		_accountIndex(Account::_nbAccounts++),
		_amount(initialDeposit),
		_nbDeposits(0),
		_nbWithdrawals(0)
{
	Account::_totalAmount += initialDeposit;
	Account::_displayTimestamp();
	cout << " index:" << this->_accountIndex << ';'
		<< "amount:" << this->_amount << ';'
		<< "created\n";
}

Account::Account(void) : _accountIndex(Account::_nbAccounts++), _amount(0),
		_nbDeposits(0), _nbWithdrawals(0)
{
	Account::_displayTimestamp();
	cout << " index:" << this->_accountIndex << ';'
		<< "amount:" << this->_amount << ';'
		<< "created\n";
}

Account::~Account(void)
{
	--Account::_nbAccounts;
	Account::_totalAmount -= this->_amount;
	Account::_totalNbDeposits -= this->_nbDeposits;
	Account::_totalNbWithdrawals -= this->_nbWithdrawals;
	Account::_displayTimestamp();
	cout << " index:" << this->_accountIndex << ';'
		<< "amount:" << this->_amount << ';'
		<< "closed\n";
}

void	Account::makeDeposit(int deposit)
{
	int const	p_amount = this->_amount;

	this->_amount += deposit;
	++this->_nbDeposits;
	Account::_totalAmount += deposit;
	++Account::_totalNbDeposits;
	Account::_displayTimestamp();
	cout << " index:" << this->_accountIndex << ';'
		<< "p_amount:" << p_amount << ';'
		<< "deposit:" << deposit << ';'
		<< "amount:" << this->_amount << ';'
		<< "nb_deposits:" << this->_nbDeposits << endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	Account::_displayTimestamp();
	cout << " index:"
		<< this->_accountIndex << ';'
		<< "p_amount:" << this->_amount << ';'
		<< "withdrawal:";
	if (withdrawal > this->_amount)
	{
		cout << "refused" << endl;
		return (false);
	}
	this->_amount -= withdrawal;
	++this->_nbWithdrawals;
	Account::_totalAmount -= withdrawal;
	++Account::_totalNbWithdrawals;
	cout << withdrawal << ';'
		<< "amount:" << this->_amount << ';'
		<< "nb_withdrawals:" << this->_nbWithdrawals << endl;
	return (true);
}

int	Account::checkAmount(void) const
{
	return this->_amount;
}

void	Account::displayStatus(void) const
{
	Account::_displayTimestamp();
	cout << " index:" << this->_accountIndex << ';'
		<< "amount:" << this->_amount << ';'
		<< "deposits:" << this->_nbDeposits << ';'
		<< "withdrawals:" << this->_nbWithdrawals << endl;
}

void	Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	cout << " accounts:" << Account::_nbAccounts << ';'
		<< "total:" << Account::_totalAmount << ';'
		<< "deposits:" << Account::_totalNbDeposits << ';'
		<< "withdrawals:" << Account::_totalNbWithdrawals << endl;
}

void	Account::_displayTimestamp(void)
{
	time_t	now;
	tm		*localTime;

	time(&now);
	localTime = localtime(&now);
//	cout << "[19920104_091532]";
	cout << "[" << setfill('0')
			  << setw(4) << localTime->tm_year + 1900
			  << setw(2) << localTime->tm_mon + 1
			  << setw(2) << localTime->tm_mday
			  << "_"
			  << setw(2) << localTime->tm_hour
			  << setw(2) << localTime->tm_min
			  << setw(2) << localTime->tm_sec
			  << setw(1)
			  << "]";
}

int	Account::getNbAccounts(void)
{
	return Account::_nbAccounts;
}

int	Account::getTotalAmount(void)
{
	return Account::_totalAmount;
}

int	Account::getNbDeposits(void)
{
	return Account::_totalNbDeposits;
}

int	Account::getNbWithdrawals(void)
{
	return Account::_totalNbWithdrawals;
}