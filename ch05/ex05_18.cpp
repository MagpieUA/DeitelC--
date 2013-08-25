// ex05_18.cpp
// Exercises from Chapter 5 "How to program C++ 8th edition"

/*
Write a program that prints a table of the binary, octal and hexadecimal
equivalents of the decimal numbers in the range 1 – 256.[Hint: You can use the
stream manipulators dec, oct and hex to display integers in decimal, octal and
hexadecimal formats, respectively.]
*/

#include <iostream>
#include <iomanip>
#include <bitset>
using namespace std;

int main()
{
	cout << setw(16) << "Number" << setw (16) << "Binary" << setw(16) << "Octal" << setw(16) << "Hex" << endl;
	for (int i = 1; i <= 256; i++)
	{
		cout << setw(16) << dec << i;
		cout << setw(16) << bitset<8>(i);
		cout << setw(16) << oct << i;
		cout << setw(16) << hex << i << endl;
	}
}