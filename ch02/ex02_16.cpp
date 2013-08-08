// ex02_16.cpp
// Exercises from Chapter 2 "How to program C++ 8th edition"

// Self-review exercises from Chapter 2 "How to program C++ 8th edition"

// Write the program that asks the user to enter two numbers, obtains the two numbers from the user
// and prints the sum, product, difference, and quotient of the two numbers.
#include <iostream>
using namespace std;

int main()
{
	int x, y;
	cout << "Enter two integer numbers :";
	cin >> x >> y;
	cout << "Sum is " << x + y << endl;
	cout << "Product is " << x * y << endl;
	cout << "Difference is " << x - y << endl;
	cout << "Quotient is " << x / y << endl;
}