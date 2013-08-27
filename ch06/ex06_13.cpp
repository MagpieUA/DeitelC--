// ex06_13.cpp
// Exercises from Chapter 6 "How to program C++ 8th edition"

/*
An application of function floor is rounding a value to the nearest integer.
The statement y = floor( x+ .5 ); rounds the number x to the nearest integer
and assigns the result to y. Write a program that reads several numbers and
uses the preceding statement to round each of these numbers to the nearest
integer. For each number processed, print both the original number and the
rounded number.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double number;
	double rounded;
	cout << "Enter next number (-1 for exit): ";
	cin >> number;
	while (number != -1)
	{
		rounded = floor( number + .5);
		cout << "Original is: " << number << " and rounded is: " << rounded << endl;
		cout << "Enter next number (-1 for exit): ";
		cin >> number;
	}
}