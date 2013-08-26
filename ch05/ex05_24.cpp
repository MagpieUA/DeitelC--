// ex05_24.cpp
// Exercises from Chapter 5 "How to program C++ 8th edition"

/*
Modify Exercise 5.23 to read an odd number in the range 1 to 19 to specify the
number of rows in the diamond, then display a diamond of the appropriate size.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int size;
	cout << "Enter size of diamond (odd number from 1 to 19): ";
	cin >> size;
	for (int row = 1; row <= size; row++)
	{
		for (int col = 1; col <= abs(size/2 + 1 - row); col++)
			cout << " ";
		for (int col = abs(size/2 + 1 - row) + 1; col <= size - abs(size/2 + 1 - row); col++)
			cout << "*";
		for (int col = size + 2 - abs(size/2 + 2 - row); col <= 10; col++)
			cout << " ";
		cout << endl;	
	}		
}