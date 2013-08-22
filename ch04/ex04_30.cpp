// ex04_30.cpp
// Exercises from Chapter 4 "How to program C++ 8th edition"

// Write a program that reads the radius of a circle (as a double value) and
// computes and prints the diameter, the circumference and the area. Use
// the value 3.14159 for π.

#include <iostream>
using namespace std;

int main()
{
	double radius;
	double pi = 3.14159;
	cout << "Enter radius of a circle: ";
	cin >> radius;
	cout << "Diameter of a circle is: " << radius * 2 << endl;
	cout << "Circumference of a circle is: " << 2 * pi * radius << endl;
	cout << "Area of a circle is: " << pi * radius * radius << endl;
}