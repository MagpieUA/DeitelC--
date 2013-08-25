// ex05_8.cpp
// Exercises from Chapter 5 "How to program C++ 8th edition"

/*
Write a program that uses a for statement to find the smallest of several
integers. Assume that the first value read specifies the number of values 
remaining.
*/

#include <iostream>
#include <limits>

using namespace std;

int main()
{
	int smallest = INT_MAX;
	int number;
	int count;
	cout << "Enter integers (first input - number of inputs): ";
	cin >> count;
	for (int i = 1; i <= count; i++)
	{
		cin >> number;
		if (number < smallest)
			smallest = number;
	}
	cout << "Smallest of entered numbers is: " << smallest << endl;
}