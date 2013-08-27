// ex06_22.cpp
// Exercises from Chapter 6 "How to program C++ 8th edition"

/*
Write a function that displays at the left margin of the screen a solid square
of asterisks whose side is specified in integer parameter side. For example,if
side is 4, the function displays the following:
****
****
****
****
*/

#include <iostream>
using namespace std;

void displaySquare(int size)
{
	for (int i = 1; i <= size; i++)
	{
		for (int j = 1; j <= size; j++)
			cout << "*";
		cout << endl;
	}
}

int main()
{
	int squareSize;
	cout << "Enter size of square (-1 to exit): ";
	cin >> squareSize;
	while (squareSize != -1)
	{
		displaySquare(squareSize);
		cout << "Enter size of square (-1 to exit): ";
		cin >> squareSize;
	}
}