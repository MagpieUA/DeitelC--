// ex02_27.cpp
// Exercises from Chapter 2 "How to program C++ 8th edition"

// Self-review exercises from Chapter 2 "How to program C++ 8th edition"

// Write a program that prints the integer equivalent of a character
// typed at the keyboard. Store the input in a variable of type char.

#include <iostream>
using namespace std;

int main()
{
	char a;
	cout << "Enter a character: ";
	cin >> a;
	cout << "Integer equivalent of '" << a << "' is " << static_cast<int>(a) << endl;
}