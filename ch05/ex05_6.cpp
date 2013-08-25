// ex05_6.cpp
// Exercises from Chapter 5 "How to program C++ 8th edition"

/*
Write a program that uses a for statement to calculate the average of several
integers. Assume the last value read is the sentinel 9999. For example, the
sequence 10 8 11 7 9 9999 indicates that the program should calculate the
average of all the values preceding 9999.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int sum = 0;
	int count = 0;
	int number;
	for (;;)
	{
		cin >> number;
		if (number == 9999) break;    // if sentinel - exit from loop
		sum += number;
		count++;
	}
	cout << "Average of entered integers is: " << fixed << 
		setprecision (2) << static_cast<double>(sum)/count << endl;
}