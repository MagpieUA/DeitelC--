// ex04_26.cpp
// Exercises from Chapter 4 "How to program C++ 8th edition"

// A palindrome is a number or a text phrase that reads the same backward as
// forward. For example, each of the following five-digit integers is a palindrome:
// 12321, 55555, 45554 and 11611. Write a program that reads in a five-digit
// integer and determines whether it’s a palindrome. [Hint: Use the division
// and modulus operators to separate the number into its individual digits.]

#include <iostream>
using namespace std;

int main()
{
	int first;
	int last;
	int number;
	int rank = 10000;
	bool result = true;
	cout << "Enter five-digit integer: ";
	cin >> number;
	while (number > 9)
	{
		first = number / rank;
		last = number % 10;
		if (first != last) result = false;	
		number = (number % rank) / 10;
		rank = rank / 100;
	}
	if (result)
		cout << "This number is palindrome!" << endl;
	else
		cout << "This number ISN'T palindrome" << endl;
}