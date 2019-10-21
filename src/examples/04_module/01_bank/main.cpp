#include<iostream>
#include "atm.h"
#include "bank_account.h"
#include "customer.h"
#include <vector>
#include "checking_account.h"
#include "savings_account.h"

using std::vector;
using std::cout;
using std::cin;

int main()
{
	CheckingAccount checking(1500);
	cout << "\n checking get_balance " << checking.get_balance() << "\n";

	SavingsAccount savings(500);
	cout << "\n savings get_balance " << savings.get_balance() << "\n";

	BankAccount& account = savings;
	cout << "\n Ref to savings get_balance: " << account.get_balance() << "\n";



	return 0;
}