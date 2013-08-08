// ex02_23.cpp
// Exercises from Chapter 2 "How to program C++ 8th edition"

// Self-review exercises from Chapter 2 "How to program C++ 8th edition"

// Write a program that reads in five integers and determines and prints
// the largest and the smallest integers in the group.
// Use only the programming techniques you learned in this chapter.

#include <iostream>
using namespace std;

int main()
{
	int a, b, c, d, e;
	int largest, smallest;
	cout << "Enter five integers:";
	cin  >> a >> b >> c >> d >> e;
	if (a > b) {smallest = b; largest = a;}
	else { smallest = a; largest = b;};
	if (smallest > c) smallest = c;
	if (smallest > d) smallest = d;
	if (smallest > e) smallest = e;
	if (largest < c) largest = c;
	if (largest < d) largest = d;
	if (largest < e) largest = e;
	cout << "Largest is " << largest << endl;
	cout << "Smallest is " << smallest << endl;
}