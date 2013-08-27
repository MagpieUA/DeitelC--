// ex06_19.cpp
// Exercises from Chapter 6 "How to program C++ 8th edition"

/*
Define a function hypotenuse that calculates the hypotenuse of a right triangle
when the other two sides are given. The function should take two double
arguments and return the hypotenuse as a double. Use this function in a program
to determine the hypotenuse for each of the triangles shown below.
side1			side2
3.0				4.0
5.0				12.0
8.0				15.0
*/

#include <iostream>
#include <cmath>
using namespace std;

double hypotenuse(double side1, double side2)
{
	return sqrt(side1 * side1 + side2 * side2);
}

int main()
{
	double x1, x2;
	x1 = 3.0;
	x2 = 4.0;
	cout << "Hypotenuse of right triangle with sides " << x1 << " and " << x2 << " is: " <<
		hypotenuse(x1,x2) << endl;
	x1 = 5.0;
	x2 = 12.0;
	cout << "Hypotenuse of right triangle with sides " << x1 << " and " << x2 << " is: " <<
		hypotenuse(x1,x2) << endl;
	x1 = 8.0;
	x2 = 15.0;
	cout << "Hypotenuse of right triangle with sides " << x1 << " and " << x2 << " is: " <<
		hypotenuse(x1,x2) << endl;
}