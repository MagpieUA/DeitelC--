// ex06_27.cpp
// Exercises from Chapter 6 "How to program C++ 8th edition"

/*
Write a program that inputs three double-precision, floating-point numbers and
passes them to a function that returns the smallest number.
*/

#include <iostream>
using namespace std;

double smallest(double x1, double x2, double x3)
{
	double result = x1;
	if (x2 < result)
		result = x2;
	if (x3 < result)
		result = x3;
	return result;
}

int main()
{
	double d1, d2, d3;
	cout << "Enter 3 float numbers (-1 to exit): ";
	cin >> d1 >> d2 >> d3;
	cout << "Smallest from entered numbers is: " << smallest(d1, d2, d3) << endl;
}