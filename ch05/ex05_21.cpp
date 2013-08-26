// ex05_21.cpp
// Exercises from Chapter 5 "How to program C++ 8th edition"

/*
A company pays its employees as managers (who receive a fixed weekly salary),
hourly workers (who receive a fixed hourly wage for up to the first 40hours they
work and “time-and-a-half” — 1.5 times their hourly wage — for overtime hours
worked), commission workers (who receive $250 plus 5.7 percent of their gross
weekly sales), or pieceworkers (who receive a fixed amount of money per item
for each of the items they produce — each piece worker in this company works on
only one type of item). Write aprogram to compute the weekly pay for each
employee. You do not know the number of employees in advance. Each type of
employee has its own pay code: Managers have code 1, hourly workers have code 2,
commission workers have code 3 and pieceworkers have code 4. Use a switch to
compute each employee’s pay according to that employee’s paycode. Within the
switch, promptthe user (i.e., the payroll clerk) to enter the appropriate facts
your program needs to calculate each employee’s pay according to that employee’s
paycode.
*/

#include <iostream>
using namespace std;

int main()
{
  int paycode = 0;
	double weeklySalary;
	double hourlySalary;
	int hours;
	double grossSales;
	double payPerItem;
	int items;
	double totalPay;
	
	cout << "Enter paycode for next employee (-1 for exit): ";
	cin >> paycode;
	
	while (paycode != -1)
	{
		switch (paycode)
		{
			case 1:
				cout << "Enter weekly salary for this manager: ";
				cin >> weeklySalary;
				totalPay = weeklySalary;
				break;
			case 2:
				cout << "Enter hourly salary for this hourly worker: ";
				cin >> hourlySalary;
				cout << "Enter number of hours worked: ";
				cin >> hours;
				if (hours <= 40)
					totalPay = hours * hourlySalary;
				else
					totalPay = 40 * hourlySalary + (hours - 40) * hourlySalary * 1.5;
				break;
			case 3:
				cout << "Enter gross sales for this comission worker: ";
				cin >> grossSales;
				totalPay = 250 + grossSales * 0.057;
				break;
			case 4:
				cout << "Enter number of produced items for this pieceworker: ";
				cin >> items;
				cout << "Enter pay for each item: ";
				cin >> payPerItem;
				totalPay = items * payPerItem;
				break;
			default:
				cout << "Wrong input!" << endl;
				totalPay = 0;
				break;				
		}
		cout << "Total weekly pay is: " << totalPay << endl << endl;
		cout << "Enter paycode for next employee (-1 for exit): ";
		cin >> paycode;
	}
}