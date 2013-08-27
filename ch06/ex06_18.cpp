// ex06_18.cpp
// Exercises from Chapter 6 "How to program C++ 8th edition"

/*
Write a function integerPower(base, exponent) that returns the value of base
exponent. For example, integerPower(3, 4) = 3 * 3 * 3 * 3. Assume that exponent
is a positive, nonzero integer and that base is an integer. Do not use any math
library functions.
*/

#include <iostream>
using namespace std;

int integerPower(int base, int exponent)
{
	int result = 1;
	for (int i = 1; i <= exponent; i++)
	{
		result *= base;
	}
	return result;
}

int main()
{
	// test function
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 5; j++)
			cout << integerPower(i, j) << "\t";
		cout << endl;
	}
}