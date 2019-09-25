//write include statements
#include "dna.h"
#include <iostream>
//write using statements
using std::cin;
using std::cout;

/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() 
{
	//start of user loop
	auto yn = 'y';
	do
	{
		//menu
		string var;
		int option;
		cout << "Enter 1 for Get GC Content or enter 2 for Get DNA Complement \n";
		cin >> option;
		//should've used a switch but this works too
		if (option == 1)
		{
			cout << "input dna for GC content \n";
			cin >> var;
			cout << get_gc_content(var)*100 << "% \n";
		}
		else if (option == 2)
		{
			cout << "intput dna for DNA Complement \n";
			cin >> var;
			cout << get_dna_complement(var) << "\n";
		}
		else
		{
			cout << "You did not enter 1 or 2 \n";
		}

		cout << "type y to continue \n";
		cin >> yn;
	} 
	while (yn == 'y' || yn == 'Y');

	return 0;
}
