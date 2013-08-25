// ex05_10.cpp
// Exercises from Chapter 5 "How to program C++ 8th edition"

/*
Write a program that uses a for statement to evaluate the factorials of the
integers from 1 to 5. Print the results in tabular format.
*/

#include <iostream>

using namespace std;

int main()
{
	int product = 1;
	for (int i = 1; i <= 5; i++)
	{
		product *= i;
		cout << product << "\t";
	}
	cout << endl;
}