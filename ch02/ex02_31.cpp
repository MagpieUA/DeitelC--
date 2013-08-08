// ex02_31.cpp
// Exercises from Chapter 2 "How to program C++ 8th edition"

// Self-review exercises from Chapter 2 "How to program C++ 8th edition"

// Create an application that calculates your daily driving cost, so that you can 
// estimate how much money could be saved by car pooling, which also has other
// advantages such as reducing carbon emissions and reducing traffic congestion.
// Theapplication should input the following information and display the user’s cost
// per day of driving to work:
// a) Total miles driven per day.
// b) Cost per gallon of gasoline.
// c) Average miles per gallon.
// d) Parking fees per day.
// e) Tolls per day.

#include <iostream>
using namespace std;

int main()
{
	int total_miles;
	float gasoline_cost, parking_fee, miles_gallon;
	cout << "Enter your total miles drive per day: ";
	cin >> total_miles;
	cout << "Enter cost per gallon of gasoline: ";
	cin >> gasoline_cost;
	cout << "Enter average miles per gallon: ";
	cin  >> miles_gallon;
	cout << "Enter parking fees per day: ";
	cin >> parking_fee;
	cout << " Your tolls per day is " << total_miles / miles_gallon * gasoline_cost + parking_fee << endl;
}