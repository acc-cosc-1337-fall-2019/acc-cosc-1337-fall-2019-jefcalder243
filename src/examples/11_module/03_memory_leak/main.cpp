#include "memory_leak.h"

int main() 
{
	memory_leak();

	while (true)
	{
		memory_leak(); //crashhhhhh
	}

	//more code
	//more code
	//ect. . .
	return 0;
}