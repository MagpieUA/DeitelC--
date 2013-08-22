// ex04_4.cpp
// Exercises from Chapter 4 "How to program C++ 8th edition"

// Write C++ statements to accomplish each of the following tasks.
// a) Declare variables sum and x to be of type int.
// b) Set variable x to 1.
// c) Set variable sum to 0.
// d) Add variable x to variable sum and assign the result to variable sum.
// e) Print "The sum is: " followed by the value of variable sum.
#include <iostream>
using namespace std;

int main()
{
	int sum; 																	// a)
	int x;																		// a)
	x = 1;																		// b)
	sum = 0;																	// c)
	sum += x;																	// d)
	cout << "The sum is: " << sum << endl;		// e)
}