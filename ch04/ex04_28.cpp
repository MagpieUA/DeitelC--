// ex04_28.cpp
// Exercises from Chapter 4 "How to program C++ 8th edition"

// Write a program that displays the following checkerboard pattern. Your
// program must use only three output statements, one of each of the following
// forms: cout << "* "; cout << ''; cout << endl;

#include <iostream>
using namespace std;

int main()
{
	int row = 1;
	int column = 1;
	while (row <= 8)
	{
		while (column <= 16)
		{
			(row + column) % 2 ? cout << " " : cout << "*";        // if sum of row and column is  even then print " ", if odd then print "*"
			column++;
		}
		cout << endl;
		row++;
		column = 1;
	}		
}