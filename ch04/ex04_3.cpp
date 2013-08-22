// ex04_3.cpp
// Exercises from Chapter 4 "How to program C++ 8th edition"

// Write C++ statements to accomplish each of the following:
// a) In one statement, assign the sum of the current value of x and y to z
//    and postincrement the value of x.
// b) Determine whether the value of the variable count is greater than 10.
//    If it is, print "Count is greater than 10."
// c) Predecrement the variable x by 1, then subtract it from the variable total.
// d) Calculate the remainder after q is divided by divisor and assign the result to q.
//    Write this statement two different ways.
#include <iostream>
using namespace std;

int main()
{
	// a)
	int x = 5;
	int y = 6
	int z = 7;
	z = x++ + y;
	cout << z << x << endl;
	
	// b)
	int count = 11;
	if (count > 10)
		cout << "Count is greater than 10."
	
	// c)
	int total = 50;
	total -= --x;
	cout << total << endl;
	
	// d)
	int q = 40;
	q = q % 6;
	cout << q << endl;
	q = 40;
	q %= 6;
	cout << q << endl;	
}