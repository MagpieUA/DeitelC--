// ex06_36.cpp
// Exercises from Chapter 6 "How to program C++ 8th edition"

/*
Write a recursive function power(base, exponent) that, when invoked, returns
base^exponent. For example, power(3, 4) = 3 * 3 * 3 * 3.
Assume that exponent is an integer greater than or equal to 1. Hint: The
recursion step would use the relationship:
base^exponent = base * base^(exponent - 1)
and the terminating condition occurs when exponent is equal to 1, because
base * 1 = base
*/

#include <iostream>
using namespace std;

double power(double base, int exponent)
{
	if (exponent == 1)
		return base;
	else
		return base * power(base, exponent - 1);
}

int main()
{
	double base; 
	int degree;
	cout << "Enter base and exponent: ";
	cin >> base >> degree;
	cout << "Number " << base << " raised to " << degree << " is: " << power(base,degree) << endl;
}