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
			std::cout << "    Beginning Balance: " << fixed << right << setprecision(2) << beginningBalance << endl;
			std::cout << "    Total Deposits: " << fixed << right << setprecision(2) << depositTotal << endl;
			std::cout << "    Total Checks: " << fixed << right << setprecision(2) << checkTotal << endl;
			std::cout << "    Total Withdrawals: " << fixed << right << setprecision(2) << withdrawalTotal << endl;
			std::cout << "    ------------------" << endl;
			endingBalance = (beginningBalance + depositTotal + checkTotal) - withdrawalTotal;
			std::cout << "    Ending Balance: " << fixed << right << setprecision(2) << endingBalance << endl;

	return 0;
}

