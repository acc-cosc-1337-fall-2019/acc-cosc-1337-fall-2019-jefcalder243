//atm.h
#ifndef ATM_H //header guards to prevent class redefinition error
#define ATM_H
#include "bank_account.h"

class ATM {

public:
	ATM(BankAccount a);
	void deposit(int amount);
	void withdraw(int amount);
	void display_balance() const;
	

private:
	BankAccount account;
};

#endif