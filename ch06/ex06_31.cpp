// ex06_31.cpp
// Exercises from Chapter 6 "How to program C++ 8th edition"

/*
The greatest common divisor (GCD) of two integers is the largest integer that
evenly divides each of the numbers. Write a function gcd that returns the
greatest common divisor of two integers.
*/

#include <iostream>
using namespace std;

int gcd( int x1, int x2)
{
	int remainder;
	while (x1 % x2 != 0)
	{
		remainder = x1 % x2;
		x1 = x2;
		x2 = remainder;
	}
	return x2;
}

int main()
{
	int number1, number2;
	cout << "Enter two integer numbers: ";
	cin >> number1 >> number2;
	cout << "GCD of " << number1 << " and " << number2 << " is: "
		<< gcd(number1, number2) << endl;
}