//
#include "report.h"
#include<iostream>

MyReport::MyReport()
	
{
	accounts = new BankAccount*[SIZE];
	//creates dynamic memory(heap) for each of the 5 addresses
	for (int i = 0; i < SIZE; ++i)
	{
		accounts[i] = new BankAccount(i*10);//calls default constructor
	}
}

void MyReport::display() const
{
	for (int i = 0; i < SIZE; ++i)
	{
		std::cout << accounts[i]->get_balance() << "\n";
	}
}

MyReport::~MyReport()
{
	for (int i = 0; i < SIZE; ++i)
	{
		delete accounts[i];
	}
	delete[] accounts;
}
