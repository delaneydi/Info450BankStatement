// Info450BankStatement.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;


int main()
{

	float beginningBalance;
	char transactionType;
	float withdrawalAmount;
	float withdrawalTotal = 0.00;
	float depositAmount;
	float depositTotal = 0.00;
	float checkAmount;
	float checkTotal = 0.00;
	float endingBalance;

	cout << "Please enter account balance: " << endl;
	cin >> beginningBalance;
	cout << "Enter transactions: " << endl;
	cout << "------------------" << endl;
	do
	{
		cout << "(W)ithdrawal, (D)eposit, (C)heck, (Q)uit" << endl;
		cin >> transactionType;
		switch (transactionType)
		{
		case 'W':
		case 'w':
			cout << "Enter amount for withdrawal --> " << endl;
			cin >> withdrawalAmount;
			withdrawalTotal += withdrawalAmount;
			break;
		case 'D':
		case 'd':
			cout << "Enter amount for deposit -->" << endl;
			cin >> depositAmount;
			depositTotal += depositAmount;
			break;
		case 'C':
		case 'c':
			cout << "Enter amount for check -->" << endl;
			cin >> checkAmount;
			checkTotal += checkAmount;
			break;
		default:
			cout << "Invalid Entry" << endl;
		}
	}

	while (transactionType != 'Q');
			std::cout << "Transaction Summary: " << endl;
			std::cout << "--------------------" << endl;
			std::cout << setw(30) << "Beginning Balance: " << fixed << setprecision(2) << setw(10) << beginningBalance << endl;
			std::cout << setw(30) << "Total Deposits: " << fixed << setprecision(2) << setw(10) << depositTotal << endl;
			std::cout << setw(30) << "Total Checks: " << fixed << setprecision(2) << setw(10) << checkTotal << endl;
			std::cout << setw(30) << "Total Withdrawals: " << fixed << setprecision(2) << setw(10) << withdrawalTotal << endl;
			std::cout << setw(30) << "------------------" << endl;
			endingBalance = (beginningBalance + depositTotal + checkTotal) - withdrawalTotal;
			std::cout << setw(30) << "Ending Balance: " << fixed << setprecision(2) << setw(10) << endingBalance << endl;

	return 0;
}

