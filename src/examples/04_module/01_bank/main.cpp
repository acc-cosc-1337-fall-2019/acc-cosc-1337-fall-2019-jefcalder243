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
	CheckingAccount a(1500);
	cout << a;

	SavingsAccount savings(500,.05);
	cout <<"calls bank account overload ostream"<< savings;
	cout << "\n savings get_balance" << savings.get_balance() << "\n";
	savings.add_interest();
	cout << savings;

	BankAccount c = a + savings;
	cout << c;

	return 0;
}