// ex02_20.cpp
// Exercises from Chapter 2 "How to program C++ 8th edition"

// Self-review exercises from Chapter 2 "How to program C++ 8th edition"

//Write a program that reads in the radius of a circle as an integer and prints
// the circle’s diameter, circumference and area. Use the constant value
// 3.14159 for pi. Do all calculations in output statements. 

#include <iostream>
using namespace std;

int main()
{
	int radius;
	cout << "Enter the radius of a circle: ";
	cin >> radius;
	cout << "Diameter is " << radius * 2 << endl;
	cout << "Circumference is " << radius * 2 * 3.14159 << endl;
	cout << "Area is " << radius * radius * 3.14159 << endl;
}