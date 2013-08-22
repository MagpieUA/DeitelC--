// ex04_16.cpp
// Exercises from Chapter 4 "How to program C++ 8th edition"

// Develop a C++ program that uses a while statement to determine the
// gross pay for each of several employees. The company pays “straight
// time” for the first 40 hours worked by each employee and pays
// “time-and-a-half” for all hours worked in excess of 40 hours. You are
// given a list of the employees of thecompany, the number of hours each 
// employee worked last week and the hourly rate of each employee. Your
// program should input this information for each employee and should
// determine and display the employee’s gross pay.

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int hours;
	double hourlyRate;
	double salary;
	cout << "Enter hours worked (-1 to end): ";
	cin >> hours;
	while (hours != -1)
	{
		cout << "Enter hourly rate of the employee ($00.00): ";
		cin >> hourlyRate;
		if (hours > 40)
		{
			salary = 40 * hourlyRate + (hours - 40) * hourlyRate * 1.5;
		}
		else
			salary = hours * hourlyRate;
		cout << "Salary is " << setprecision (2) << fixed << salary << endl << endl;
		cout << "Enter hours worked (-1 to end): ";
		cin >> hours;
	}	
}