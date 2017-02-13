// Info450BankStatement.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	float accountValue;
	char transactionType;
	float withdrawalAmount;
	float depositAmount;
	float checkAmount;
	cout << "Please enter account balance" << endl;
	cin >> accountValue;
	cout << "Enter transactions:" << endl;
	cout << "------------------" << endl;

	do
	{
		cout << "(W)ithdrawal (D)eposit (C)heck (Q)uit" << endl;
		cin >> transactionType;

		for (transactionType == 'W'; transactionType == 'w';)
		{
			cout << "Enter amount for withdrawal -->" << endl;
			cin >> withdrawalAmount;
			for (transactionType == 'D'; transactionType == 'd';)
			{
				cout << "Enter amount for deposit -->" << endl;
				cin >> depositAmount;
				for (transactionType == 'C'; transactionType == 'c';)
				{
					cout << "Enter amount for check -->" << endl;
					cin >> checkAmount; 
				}
			}
		}

	} while (transactionType == 'W' || transactionType == 'w');

	return 0;
}

