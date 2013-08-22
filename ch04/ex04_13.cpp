// ex04_13.cpp
// Exercises from Chapter 4 "How to program C++ 8th edition"

// Drivers are concerned with the mileage obtained by their automobiles. One
// driver has kept track of several trips by recording miles driven and gallons
// used for each trip. Develop a C++ program that uses a while statement to
// input the miles driven and gallons used for each trip. The program should
// calculate and display the miles per gallon obtained for each trip and print
// the combined miles per gallon obtained for all tankfuls up to this point.

#include <iostream>
using namespace std;

int main()
{
	int milesDriven;
	int gallonsUsed;
	int milesTotal = 0;
	int gallonsTotal = 0;
	cout << "Enter miles driven (-1 to quit): ";
	cin >> milesDriven;
	while (milesDriven != -1)
	{
		cout << "Enter gallons used: ";
		cin >> gallonsUsed;
		milesTotal += milesDriven;
		gallonsTotal += gallonsUsed;
		cout << "MPG this trip: " << static_cast<double>(milesDriven) / gallonsUsed << endl;
		cout << "Total MPG: " << static_cast<double>(milesTotal) / gallonsTotal << endl << endl;
		cout << "Enter miles driven (-1 to quit): ";
		cin >> milesDriven;
	}	
}