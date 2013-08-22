// ex04_18.cpp
// Exercises from Chapter 4 "How to program C++ 8th edition"

// Write a C++ program that uses a while statement and the tab escape sequence
// \t to print the table of values

#include <iostream>
using namespace std;

int main()
{
	int base = 1;
	cout << "N\t\t10*N\t\t100*N\t\t1000*N" << endl << endl;    // Header of the table
	while (base <= 5)
	{
		cout << base << "\t\t" << 10 * base << "\t\t" << 100*base << "\t\t" << 1000*base << endl;
		base++;
	}
}