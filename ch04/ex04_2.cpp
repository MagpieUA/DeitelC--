// ex04_2.cpp
// Exercises from Chapter 4 "How to program C++ 8th edition"

// Self-review exercises from Chapter 4 "How to program C++ 8th edition"

// Write four different C++ statements that each add 1 to integer variable x.
#include <iostream>
using namespace std;

int main()
{
	int x = 0;
	x = x + 1;   // first
	cout << x << endl;
	x += 1;			// second
	cout << x << endl;
	x++;				// third
	cout << x << endl;
	++x;				// fourth
	cout << x << endl;
}