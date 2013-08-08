// ex02_24.cpp
// Exercises from Chapter 2 "How to program C++ 8th edition"

// Self-review exercises from Chapter 2 "How to program C++ 8th edition"

// Write a program that reads an integer and determines and prints whether
// it’s odd or even. 

#include <iostream>
using namespace std;

int main()
{
	int x;
	cout << "Enter integer number: ";
	cin >> x;
	if (x % 2 == 0) cout << "Number " << x << " is even" << endl;
	else cout << "Number " << x << " is odd" << endl;
}