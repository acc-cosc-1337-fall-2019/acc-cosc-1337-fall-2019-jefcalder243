#include "vectors.h"
#include <string>
#include <iostream>
using std::cin;
using std::cout;
/*
use a vector of int with values 8, 4, 20, 88, 66, 99

Prompt user for 1 for Get Max from vector and 2 for Get primes.
Prompt user for a number and return max value or list of primes
and display them to screen.
Program continues until user decides to exit.

*/
int main() 
{
	auto yn = 'y';
	do
	{
		int option = 1;
		cout << "Enter 1 for get max from vector. Enter 2 for get primes \n";
		cin >> option;
		if (option == 1)
		{
			vector<int> my_vector{};

			do
			{
				cout << "Please enter vector value. \n";
				int input;
				cin >> input;
				my_vector.push_back(input);
				cout << "Would you like to add another value to the vector? enter y for yes \n";
				cin >> yn;
			} while (yn == 'y' || yn == 'Y');
			cout << "The max is:" << get_max_from_vector(my_vector) << "\n";
		}
		else if (option == 2)
		{
			cout << "Pick a number \n";
			cin >> option;
			for (int i = 0; i < vector_of_primes(option).size(); ++i)
			{
				cout << vector_of_primes(option)[i] << "\n";
			}
		}
		else 
		{
			cout << "You did not enter 1 or 2 \n";
		}

		cout << "Enter y to continue \n";
		cin >> yn;

	} 
	while (yn == 'y' || yn == 'Y');

	return 0;
}