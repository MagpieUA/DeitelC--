// ex06_30.cpp
// Exercises from Chapter 6 "How to program C++ 8th edition"

/*
Write a function that takes an integer value and returns the number with its
digits reversed. For example, given the number 7631, the function should return
1367.
*/

#include <iostream>
using namespace std;

int reverse (int number)
{
	int result = 0;
	while (number != 0)
	{
		result = result * 10 + number % 10;
		number /= 10;
	}
	return result;
}

int main()
{
	int number;
	cout << "Enter integer number (-1 to exit): ";
	cin >> number;
	while (number != -1)
	{
		cout << "Reversed number is: " << reverse(number) << endl;
		cout << "Enter integer number (-1 to exit): ";
		cin >> number;
	}
}