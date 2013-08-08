// ex02_19.cpp
// Exercises from Chapter 2 "How to program C++ 8th edition"

// Self-review exercises from Chapter 2 "How to program C++ 8th edition"

//Write a program that inputs three inte<<nd largest of these numbers.

#include <iostream>
using namespace std;

int main()
{
	int x, y, z;
	int smallest, largest;
	cout << "Input three different integers: ";
	cin >> x >> y >> z;
	cout << "Sum is " << x + y + z << endl;
	cout << "Average is " << (x + y + z) / 3 << endl;
	cout << "Product is " << x * y * z << endl;
	if (x > y) {smallest = y; largest = x;}
	else {smallest = x; largest = y;}
	if (smallest > z) smallest = z;
	if (largest < z) largest = z;
	cout << "Smallest is " << smallest << endl;
	cout << "Largest is " << largest << endl;
}