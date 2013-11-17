// ex06_43.cpp
// Exercises from Chapter 6 "How to program C++ 8th edition"

/*
Write function distance that calculates the distance between two points (x1, y1)
and (x2, y2). All numbers and return values should be of type double.
*/

#include <iostream>
#include <cmath>
using namespace std;

// calculate the distance between two points (x1, y1) and (x2, y2)
double distance(double x1, double y1, double x2, double y2)
{
	return sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2)); 
}

int main()
{
	double x1, y1;   // first point
	double x2, y2;   // second point
	cout << "This program will calculate the distance between two points" << endl;
	cout << "Enter coordinates of first point: ";
	cin >> x1 >> y1;
	cout << "Enter coordinates of second point: ";
	cin >> x2 >> y2;
	cout << "Distance between points is: " << distance(x1, y1, x2, y2) << endl;
}