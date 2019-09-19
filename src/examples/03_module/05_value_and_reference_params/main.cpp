#include<iostream>

int main() 
{
	int num = 5;
	std::cout << "Address: " << &num <<"\n";
	std::cout << "Value: " << num;
	
	

	int &numref = num;
	std::cout << numref << "\n";

	numref = 10;
	std::cout << numref << "\n";
	std::cout << num << "\n";

	return 0;
}