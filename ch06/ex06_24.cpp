// ex06_24.cpp
// Exercises from Chapter 6 "How to program C++ 8th edition"

/*
Write program segments that accomplish each of the following:
a) Calculate the integer part of the quotient when integer a is divided by
integer b.
b) Calculate the integer remainder when integer a is divided by integer b.
c) Use the program pieces developed in(a) and (b) to write a function that
inputs an integer between 1 and 32767 and prints it as a series of digits, each
pair of which is separated by two spaces. For example, the integer 4562 should
print as follows: 4  5  6  2
*/

#include <iostream>
using namespace std;

int intQuotient(int number, int divisor)
{
	return number / divisor;
}

int intRemainder(int number, int divisor)
{
	return number % divisor;
}

int main()
{
	int number;
	int divisor = 10000;
	cout << "Enter number (between 1 and 32767): ";
	cin >> number;
	while (number != 0)
	{
		if (intQuotient(number, divisor) != 0)
		{
			cout << intQuotient(number, divisor) << "  ";
			number = intRemainder(number, divisor);
		}
		divisor /= 10;
	}
	cout << endl;
}