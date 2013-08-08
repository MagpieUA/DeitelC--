// ex02_28.cpp
// Exercises from Chapter 2 "How to program C++ 8th edition"

// Self-review exercises from Chapter 2 "How to program C++ 8th edition"

// Write a program that inputs a five-digit integer, separates the integer
// into its digits and prints them separated by three spaces each.
#include <iostream>
using namespace std;

int main()
{
	int x;
	cout << "Enter five-digit integer: ";
	cin >> x;
	cout << x / 10000 << "   ";
	x = x % 10000;
	cout << x / 1000 << "   ";
	x = x % 1000;
	cout << x / 100 << "   ";
	x = x % 100;
	cout << x / 10 << "   ";
	cout << x % 10 << endl;
}