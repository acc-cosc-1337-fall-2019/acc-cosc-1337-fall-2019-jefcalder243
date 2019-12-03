//write code for for stack_array and display each element to screen
#include "arrays_mem.h"
#include<iostream>

void stack_array()
{
	const int SIZE = 5;
	int hours[SIZE] = { 5,10,30,20,7 };
	hours[0] = 50;//access and modify
	//interate an array
	for (int i = 0; i < SIZE; ++i)
	{
		std::cout << hours[i] << "\n";
	}

	std::cout << "\n";
	//iterate with for ranged
	for (auto hour : hours)// put a & before hour to modify the original
	{
		std::cout << hour << "\n";
	}
	//pointer to first hours array element
	int* first_element = hours;
	std::cout << "first_element: " << *first_element << "\n";
	std::cout << "second_element: " << *(first_element + 1) << "\n";
	*first_element++;
	*first_element++;
	std::cout << "third_element: " << *first_element++ << "\n";// gives same result with or without ++
	*first_element--;
	std::cout << "third_element: " << *first_element-- << "\n\n";

	int* hours_ptr = hours;
	//iterate array w a pointer forward
	for (int i = 0; i < SIZE; i++)
	{
		std::cout << *hours_ptr << "\n";
		hours_ptr++;
	}

	//iterate array pointer backwards
	for (int i = 0; i < SIZE; i++)
	{
		hours_ptr--;
		std::cout << *hours_ptr << "\n";
	}
}