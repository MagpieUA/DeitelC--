// ex04_7.cpp
// Exercises from Chapter 4 "How to program C++ 8th edition"

// Write single C++ statements or portions of statements that do the following:
// a) Input integer variable x with cin and >>.
// b) Input integer variable y with cin and >>.
// c) Set integer variable i to 1.
// d) Set integer variable power to 1.
// e) Multiply variable power by x and assign the result to power.
// f) Preincrement variable i by 1.
// g) Determine whether i is less than or equal to y.
// h) Output integer variable power with cout and <<.
#include <iostream>
using namespace std;

int main()
{
	int x;																							
	int y;
	cin >> x;																						// a)
	cin >> y;																						// b)
	int i = 1;																					// c)
	int power = 1;																			// d)
	power *= x;																					// e)
	++i;																								// f)
	i <= y ? cout << "True" : cout << "False" << endl;	// g)
	cout << power << endl;															// h)
}
