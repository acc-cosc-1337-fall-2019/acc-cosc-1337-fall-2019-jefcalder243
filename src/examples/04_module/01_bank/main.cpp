#include<functional>
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
using std::reference_wrapper;

int main()
{
	int * ptr_num = new int(5); //acquire dynamic memory
	std::cout << "Address of: " << ptr_num << std::endl;
	std::cout << "Value pointed to: " << *ptr_num;

	delete ptr_num; //YOU MUST REMEMBER TO DELETE ALLOCATED MEMORY

	return 0;
}