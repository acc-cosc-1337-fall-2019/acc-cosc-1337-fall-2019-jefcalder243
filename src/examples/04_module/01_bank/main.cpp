#include<iostream>
#include "atm.h"
#include "bank_account.h"
#include "customer.h"
#include <vector>
#include "checking_account.h"

using std::vector;
using std::cout;
using std::cin;

int main()
{
	CheckingAccount a(1500);
	cout << a.get_balance();


	return 0;
}