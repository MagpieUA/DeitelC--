// ex05_13.cpp
// Exercises from Chapter 5 "How to program C++ 8th edition"

/*
Write a program that reads five numbers (each between 1 and 30). Assume that
the user enters only valid values. For each number that is read, your
program should print a line containing that number of adjacent asterisks. For
example, if your program reads the number 7, it should print *******.
*/

#include <iostream>

using namespace std;

int main()
{
	int number;
	cout << "Enter five integer numbers (each between 1 and 30): ";
	for (int i = 1; i <= 5; i++)
	{
		cin >> number;
		for (int j = 1; j <= number; j++)
			cout << "*";
		cout << endl;
	}
}