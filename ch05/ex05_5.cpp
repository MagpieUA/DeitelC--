// ex05_5.cpp
// Exercises from Chapter 5 "How to program C++ 8th edition"

/*
Write a program that uses a for statement to sum a sequence of integers. Assume
that the first integer read specifies the number of values remaining to be
entered. Your program should read only one value per input statement. A typical
input sequence might be
5 100 200 300 400 500
where the 5 indicates that the subsequent 5 values are to be summed.
*/

#include <iostream>
using namespace std;

int main()
{
	int sum = 0;
	int count;
	int number;
	cin >> count;
	for (int i = 1; i <= count; i++)
	{
		cin >> number;
		sum += number;
	}
	cout << "Sum of " << count << " entered integers is: " << sum << endl;
}