#include<iostream>
#include<vector>
#include "bank_account.h"

using std::cout;
using std::vector;

int main()
{
	vector<BankAccount> accounts;
	BankAccount b1;//can reference locally
	accounts.push_back(b1);
	accounts.push_back(BankAccount(750));// cannot reference locally
	//accounts.push_back(BankAccount()); could also do this. adds new account
	

	for (auto account : accounts)
	{
		cout << "balance: " << account.get_balance() << "\n";
	}
	return 0;
}