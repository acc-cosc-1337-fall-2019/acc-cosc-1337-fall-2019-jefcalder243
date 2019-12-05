#include "C:\Users\8584014\source\repos\acc-cosc-1337-fall-2019-jefcalder243\src\examples\12_module\08_arrays_dyn_1\bank_account.h"

//constructor use for loop to initialize account to increments of 10 balance (5 times)
//display iterate and display array
//free memory using a loop to delete an nullify
class MyReport
{
public:
	MyReport();
	void display()const;
	~MyReport();
private:
	BankAccount** accounts;//two dereference make it a pointer to pointer
	const int SIZE{ 5 };
};

