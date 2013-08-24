// ex04_32.cpp
// Exercises from Chapter 4 "How to program C++ 8th edition"

// Write a program that reads three nonzero double values and determines and
// prints whether they could represent the sides of a triangle.

#include <iostream>
using namespace std;

int main()
{
	double s1, s2, s3;             // potential sides of triangle
	cout << "Enter lengths of 3 segments: ";
	cin >> s1 >> s2 >> s3;
	bool result = ((s1 < s2 + s3) and (s2 < s1 + s3) and (s3 < s1 + s2)); // determine whether length of each side less than sum of two others
	if (result)
		cout << "This segments could represent sides of the triangle!" << endl;
	else
		cout << "This segments could NOT represent sides of the triangle" << endl;
}