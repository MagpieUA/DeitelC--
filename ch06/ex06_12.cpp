// ex06_12.cpp
// Exercises from Chapter 6 "How to program C++ 8th edition"

/*
A parking garage charges a $2.00 minimum fee to park for up to three hours.
The garage charges an additional $0.50 per hour for each hour or part there of
in excess of three hours. The maximum charge for any given 24-hour period is
$10.00. Assume that no car parks for longer than 24 hours at a time. Write a
program that calculates and prints the parking charges for each of three
customers who parked their cars in this garage yesterday. You should enter the
hours parked for each customer. Your program should print the results in a neat
tabular format and should calculate and print the total of yesterday’s receipts.
The program should use the function calculateCharges to determine the charge
for each customer. Your outputs should appear in the following format:
Car			Hours		Charge
1			  1.5         2.00
2			  4.0		  2.50
3			 24.0		 10.00
TOTAL		 29.5		 14.50
*/

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double calculateCharges (double hours)
{	
	double result;
	if (hours <= 3)
		result = 2.00;
	else if (hours >= 11)
		result = 10.00;
	else
		result = 2.00 + ceil((hours - 3)) * 0.50;
	return result;
}

int main()
{
	double totalCharge = 0;
	double totalHours = 0;
	double charge;
	double hoursFirst, hoursSecond, hoursThird;
	cout << "Enter hours parked for all three customers" << endl;
	cin >> hoursFirst >> hoursSecond >> hoursThird;
	cout << left << setw(8) << "Car" << setw(8) << right << "Hours"
				<< setw(8) << "Charge" << endl;
	// 1
	charge = calculateCharges(hoursFirst);
	totalCharge += charge;
	totalHours += hoursFirst;
	cout << fixed << left << setw(8) << "1" << setw(8) << right << setprecision(1) << hoursFirst
					<< setw(8) << setprecision(2) << charge << endl;
	// 2
	charge = calculateCharges(hoursSecond);
	totalCharge += charge;
	totalHours += hoursSecond;
	cout << fixed << left << setw(8) << "2" << setw(8) << right << setprecision(1) << hoursSecond
					<< setw(8) << setprecision(2) << charge << endl;
	// 3
	charge = calculateCharges(hoursThird);
	totalCharge += charge;
	totalHours += hoursThird;
	cout << fixed << left << setw(8) << "3" << setw(8) << right << setprecision(1) << hoursThird
					<< setw(8) << setprecision(2) << charge << endl;
	cout << left << setw(8) << "TOTAL" << setw(8) << right << setprecision(1) << totalHours
				<< setw(8) << setprecision(2) << totalCharge << endl;
}