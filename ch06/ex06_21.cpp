// ex06_21.cpp
// Exercises from Chapter 6 "How to program C++ 8th edition"

/*
Write a program that inputs a series of integers and passes them one at a time
to function isEven, which uses the modulus operator to determine whether an
integer is even. The function should take an integer argument and return true
if the integer is even and false otherwise.
*/

#include <iostream>
using namespace std;

bool isEven(int x)
{
	return ((x % 2) == 0);
}

int main()
{
	for (int i = 1; i <= 20; i++)
		if (isEven(i))
			cout << "Number " << i << " is even!" << endl;
		else
			cout << "Number " << i << " is odd!" << endl;
}