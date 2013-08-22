// ex04_19.cpp
// Exercises from Chapter 4 "How to program C++ 8th edition"

// Using an approach similar to that in Exercise 4.17, find the two largest values
// among the 10 numbers. [Note: You must input each number only once.]

#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
	int counter = 1;
	int number;
	int largest = INT_MIN;
	int subLargest = INT_MIN;
	while (counter <= 10)
	{
		cout << "Enter number #" << counter << ": ";
		cin >> number;
		if (number > largest)
		{
			subLargest = largest;
			largest = number;
		}
		else if (number > subLargest) 
			subLargest = number;
		counter++;
	}
	cout << endl << "Largest number is " << largest << endl;
	cout << "Second largest number is " << subLargest << endl;
}