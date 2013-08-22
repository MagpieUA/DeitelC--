// ex04_25.cpp
// Exercises from Chapter 4 "How to program C++ 8th edition"

// Write a program that reads in the size of the side of a square then prints
// a hollow square of that size out of asterisks and blanks. Your program
// should work for squares of all side sizes between 1 and 20. For example,
// if your program reads a size of 5, it shouldprint
// *****
// *   *
// *   *
// *   *
// *****

#include <iostream>
using namespace std;

int main()
{
	int size;
	int row = 1;
	int column = 1;
	cout << "Enter size of square: ";
	cin >> size;
	while (row <= size)
	{
		while (column <= size)
		{
			if (row == 1 or row == size or column == 1 or column == size)
				cout << "*";
			else 
				cout << " ";
			column++;
		}
		cout << endl;
		row++;
		column = 1;
	}
}