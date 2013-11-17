// ex06_41.cpp
// Exercises from Chapter 6 "How to program C++ 8th edition"

/*
The greatest common divisor of integers x and y is the largest integer that
evenly divides both x and y. Write a recursive function gcd that returns the
greatest common divisor of x and y, defined recursively as follows:
If y is equal to 0,then gcd(x, y) is x; otherwise, gcd(x, y) is gcd(y, x% y),
where % is the modulus operator.
[Note: For this algorithm, x must be larger than y.]
*/

#include <iostream>
using namespace std;

// recursive search of greatest common divisor
int gcd(int x, int y)
{
	cout << "Step of recursion: x = " << x << ", y = " << y << endl;
	if (y == 0)
	{
		cout << "GCD is: " << x << endl;;
		return x;
	}
	else
	{
		return gcd(y, x % y);
	}	
}

int main()
{
	int x, y;
	cout << "This program will find greatest common divisor of two numbers recursively" << endl;
	cout << "Enter x: ";
	cin >> x;
	cout << "Enter y: ";
	cin >> y;
	gcd(x, y);
}
