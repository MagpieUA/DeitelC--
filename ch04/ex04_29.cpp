// ex04_29.cpp
// Exercises from Chapter 4 "How to program C++ 8th edition"

// Write a program that prints the powers of the integer 2, namely 2, 4, 8, 16,
// 32, 64, etc. Your while loop should not terminate (i.e.,you should create an
// infinite loop). To do this, simply use the keyword true as the expression for
// the while statement.

#include <iostream>
using namespace std;

int main()
{
	int number = 2;
	while (true)
	{
		cout << number << endl;
		number *= 2;
	}
}