// ex02_25.cpp
// Exercises from Chapter 2 "How to program C++ 8th edition"

// Self-review exercises from Chapter 2 "How to program C++ 8th edition"

// Write a program that reads in two integers and determines and prints
// if the first is a multiple of the second.

#include <iostream>
using namespace std;

int main()
{
	int x, y;
	cout << "Enter two integers: ";
	cin >> x >> y;
	if (x % y == 0) cout << x << " is a multiple of " << y << endl;
	else cout << x << " isn't a multiple of " << y << endl;
}