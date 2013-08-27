// ex06_14.cpp
// Exercises from Chapter 6 "How to program C++ 8th edition"

/*
Function floor can be used to round a number to a specific decimal place. The
statement y=floor( x * 10 + .5 ) / 10; rounds x to the tenths position ( the
first position to the right of the decimal point). The statement
y=floor( x * 100 + .5 ) / 100; rounds x to the hundredths position (the second
position to the right of the decimal point). Write a program that defines four
functions to round a number x in various ways:
a) roundToInteger( number )
b) roundToTenths( number)
c) roundToHundredths( number )
d) roundToThousandths( number )
For each value read, your program should print the original value, the number
rounded to the nearest integer, the number rounded to the nearest tenth, the
number rounded to the nearest hundredth and the number rounded to the nearest
thousandth.
*/

#include <iostream>
#include <cmath>
using namespace std;

double roundToInteger(double number)
{
	return floor( number + .5);
}

double roundToTenths(double number)
{
	return floor( number * 10 + .5) / 10;
}

double roundToHundredths(double number)
{
	return floor( number * 100 + .5) / 100;
}

double roundToThousandths(double number)
{
	return floor( number * 1000 + .5) / 1000;
}

int main()
{
	double number;
	cout << "Enter next number (-1 to exit): ";
	cin >> number;
	while (number != -1)
	{
		cout << number << "\t\t" << roundToInteger(number) << "\t\t" 
			<< roundToTenths(number) << "\t\t" << roundToHundredths(number) << "\t\t"
			<< roundToThousandths(number) << endl;
		cout << "Enter next number (-1 to exit): ";
		cin >> number;
	}
}
