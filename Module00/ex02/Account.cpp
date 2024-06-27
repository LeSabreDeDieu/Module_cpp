/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 08:43:09 by sgabsi            #+#    #+#             */
/*   Updated: 2024/06/27 09:58:29 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

using std::cout;
using std::endl;

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

void Account::_displayTimestamp() {
	time_t now = time(0);
	tm *ltm = localtime(&now);
	cout << "[" << 1900 + ltm->tm_year;
	cout << 1 + ltm->tm_mon;
	cout << ltm->tm_mday << "_";
	cout << ltm->tm_hour;
	cout << ltm->tm_min;
	cout << ltm->tm_sec << "]";
}

Account::Account( int initial_deposit ) :
	_accountIndex(_nbAccounts++),
	_amount(initial_deposit),
	_nbDeposits(0),
	_nbWithdrawals(0)	
{
	_totalAmount += initial_deposit;
	_displayTimestamp();
	cout << " index:" << _accountIndex;
	cout << ";amount:" << _amount;
	cout << ";created" << endl;
}

Account::~Account() {
	_displayTimestamp();
	cout << " index:" << _accountIndex;
	cout << ";amount:" << _amount;
	cout << ";closed" << endl;
}

int Account::getNbAccounts() { return _nbAccounts; }
int Account::getTotalAmount() { return _totalAmount; }
int Account::getNbDeposits() { return _totalNbDeposits; }
int	Account::getNbWithdrawals() { return _totalNbWithdrawals; }

void Account::displayAccountsInfos() {
	_displayTimestamp();
	cout << " accounts:" << getNbAccounts() << ";";
	cout << "total:" << getTotalAmount() << ";";
	cout << "deposits:" << getNbDeposits() << ";";
	cout << "withdrawals:" << getNbWithdrawals() << endl;
}

void Account::displayStatus() const {
	_displayTimestamp();
	cout << " index:" << this->_accountIndex;
	cout << ";amount:" << this->_amount;
	cout << ";deposits:" << this->_nbDeposits;
	cout << ";withdrawals:" << this->_nbWithdrawals << endl;
}

int Account::checkAmount() const {
	return this->_amount;
}

void Account::makeDeposit(int deposit) {
	int	prevAmount = this->_amount;
	this->_amount += deposit;
	_totalAmount += deposit;
	this->_nbDeposits++;
	_totalNbDeposits++;
	_displayTimestamp();
	cout << " index:" << this->_accountIndex;
	cout << ";p_amount:" << prevAmount;
	cout << ";deposit:" << deposit;
	cout << ";amount:" << this->_amount;
	cout << ";nb_deposits:" << this->_nbDeposits << endl;
}

bool Account::makeWithdrawal(int withdrawal) {
	int prevAmount = this->_amount;
	if (this->checkAmount() - withdrawal >= 0) {
		this->_amount -= withdrawal;
		_totalAmount -= withdrawal;
		this->_nbWithdrawals++;
		_totalNbWithdrawals++;
		_displayTimestamp();
		cout << " index:" << this->_accountIndex;
		cout << ";p_amount:" << prevAmount;
		cout << ";withdrawal:" << withdrawal;
		cout << ";amount:" << this->_amount;
		cout << ";nb_withdrawals:" << this->_nbWithdrawals << endl;
		return true;
	}
	_displayTimestamp();
	cout << " index:" << this->_accountIndex;
	cout << ";p_amount:" << prevAmount;
	cout << ";withdrawal:refused" << endl;
	return false;
}