#include "ref_pointers.h"

//

//shows that refernces and pointers can modify data pointed to.

void ref(int &number, int* numberPtr)
{
	number = 500;
	*numberPtr = 1000;
}

