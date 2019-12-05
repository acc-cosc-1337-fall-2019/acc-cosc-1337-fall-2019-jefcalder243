#include "C:\Users\8584014\source\repos\acc-cosc-1337-fall-2019-jefcalder243\src\examples\12_module\08_arrays_dyn_1\bank_account.h"

//default constructor create dyanamic array of 5 Bank accounts
//display function iterate with an indexed for and display balance
//destructor free memory
class Report 
{
public:
	Report();
	void display()const;
	~Report();
private:
	BankAccount* accounts;
	const int SIZE{ 5 };
};