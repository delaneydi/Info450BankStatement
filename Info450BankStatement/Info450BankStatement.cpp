// Info450BankStatement.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
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
	while (transactionType != 'Q' || 'q');
			cout << "Transaction Summary: " << endl;
			cout << "-------------------" << endl;
			cout << "    Beginning Balance: " << beginningBalance << endl;
			cout << "    Total Deposits: " << depositTotal << endl;


	return 0;
}

