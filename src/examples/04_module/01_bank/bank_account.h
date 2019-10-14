//bank_account.h
//make sure you do this when you make classes
#ifndef BANK_ACCOUNT_H //header guards to prevent class redefinition error
#define BANK_ACCOUNT_H
#include<iostream>


class BankAccount 
{
public:
	BankAccount();
	BankAccount(int b) : balance(b) {}; //inline constructor
	int get_balance() const; //const makes class members read only
	void deposit(int amount);
	void withdraw(int amount);
	friend void display(const BankAccount& account);
	friend std::ostream & operator <<(std::ostream & out, const BankAccount & b);
	friend std::istream & operator >>(std::istream & in, BankAccount & b);

protected: // means it can be inherited
	
	

	int balance;

};

#endif
//this too