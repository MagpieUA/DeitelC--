// ex04_17.cpp
// Exercises from Chapter 4 "How to program C++ 8th edition"

// Write a C++ program that uses a while statement to determine and print
// the largest number of 10 numbers input by the user. Your program should
// use three variables, as follows:
// counter: A counter to count to 10 (i.e.,to keep track of how many numbers
// have been input and to determine when all 10 numbers have been processed).
// number: The current number input to the program.
// largest: The largest number found so far .

#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
	int counter = 1;
	int number;
	int largest = INT_MIN;
	while (counter <= 10)
	{
		cout << "Enter number #" << counter << ": ";
		cin >> number;
		if (number > largest) largest = number;
		counter++;
	}
	cout << endl << "Largest number is " << largest << endl;
}
