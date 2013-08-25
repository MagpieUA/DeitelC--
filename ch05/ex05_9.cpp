// ex05_9.cpp
// Exercises from Chapter 5 "How to program C++ 8th edition"

/*
Write a program that uses a for statement to calculate and print the product
of the odd integers from 1 to 15.
*/

#include <iostream>

using namespace std;

int main()
{
	int product = 1;
	for (int i = 1; i <= 15; i += 2)
	{
		product *= i;
	}
	cout << "Product of the odd integers from 1 to 15 is: " << product << endl;
}