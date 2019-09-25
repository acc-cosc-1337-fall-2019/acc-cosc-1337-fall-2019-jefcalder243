#include "dna.h"
/*
Write code for function get_gc_content that accepts
a const reference string parameter and returns a double.
Calculate GC content:
Iterate string count Gs and Cs, divide count by string length.
Return quotient.
*/
double get_gc_content(const string & var)
{
	double gc = 0;
	double dna = 0;
	for (int i = 0; i < var.size(); ++i)
	{
		if (var[i] == 'G' || var[i] == 'C' || var[i] == 'g' || var[i] == 'c')
		{
			gc = gc + 1;
			dna = dna + 1;
		}
		else
		{
			dna = dna + 1;
		}
	}
	gc = gc / dna;
	return gc;
}





/*
Write code for function get_reverse_string that
accepts a string parameter and returns a string reversed.
*/
string get_reverse_string(string var)
{
	string reverse;
	for (int i = 1; i <= var.size(); ++i)
	{
		reverse = reverse + var[var.size()-i];
	}
	return reverse;
}




/*
Write prototype for function get_dna_complement that
accepts a string dna and returns a string.
Calculate dna complement:
a. call function get_reverse_string(dna), save results to a local string variable
b. iterate local string variable and
    replace A with T, T with A, C with G and G with C
c. return string

*/
string get_dna_complement(string var)
{
	string dna;
	dna = get_reverse_string(var);

	for (int i = 0; i < dna.size(); ++i)
	{
		if (dna[i] == 'G' || dna[i] == 'g')
		{
			dna[i] = 'C';
		}
		else if (dna[i] == 'C' || dna[i] == 'c')
		{
			dna[i] = 'G';
		}
		else if (dna[i] == 'A' || dna[i] == 'a')
		{
			dna[i] = 'T';
		}
		else if (dna[i] == 'T' || dna[i] == 't')
		{
			dna[i] = 'A';
		}
	}
	return dna;
}
