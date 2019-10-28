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
	int num = 5;
	int & num_ref = num; //get the address of num
	std::cout << "Address: " << &num_ref << std::endl; //output address
	std::cout << "Value at above address: " << num_ref << std::endl; //output value at address of num

	int * val_ = &num_ref; //point to the address of num
	std::cout << "Address pointed to: " << val_ << std::endl; //get the address of num
	std::cout << "Value pointed to: " << *val_ << std::endl; //get the value pointed to by val_

	*val_ = 15;
	std::cout << "Address pointed to: " << val_ << std::endl; //get the address of num
	std::cout << "Value pointed to: " << *val_ << std::endl; //get the value pointed to by val_

	return 0;
}