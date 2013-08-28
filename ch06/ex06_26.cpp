// ex06_26.cpp
// Exercises from Chapter 6 "How to program C++ 8th edition"

/* 
Implement the following integerfunctions:
a) Function celsius returns the Celsius equivalent of a Fahrenheit temperature.
b) Function fahrenheit returns the Fahrenheit equivalent of a Celsius
	temperature.
c) Use these functions to write a program that prints charts showing the
	Fahrenheit equivalents of all Celsius temperatures from 0 to 100 degrees, and
	the Celsius equivalents of all Fahrenheit temperatures from 32 to 212 degrees.
	Print the outputs in a neat tabular format that minimizes the number of lines
	of output while remaining readable.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int fahrenheit (int celsius)
{
	return celsius * 9 / 5 + 32;
}

int celsius (int fahrenheit)
{
	return (fahrenheit - 32) * 5 / 9;
}

int main()
{
	cout << "Fahrenheit equivalents of all Celsius temperatures from 0 to 100: " << endl;
	for (int c = 1; c <= 100; c++)
	{
		cout << setw(8) << fahrenheit(c);
	}
	cout << endl;
	cout << "Celsius equivalents of all Fahrenheit temperatures from 32 to 212: " << endl;
	for (int f = 32; f <= 212; f++)
	{
		cout << setw(8) << celsius(f);
	}
	cout << endl;
}