// ex04_15.cpp
// Exercises from Chapter 4 "How to program C++ 8th edition"

// A large company pays its salespeople on a commission basis.
// The salespeople each receive $200 per week plus 9% of their
// grosssales for that week. For example, a salesperson who sells
// $5000 worth of chemicals in a week receives $200 plus 9% of $5000,
// or a total of $650. Develop a C++ program that uses a while
// statement to input each salesperson’s gross sales for last week
// and calculates and displays that salesperson’s earnings.
// Process one salesperson’s figures at a time.

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double sales;
	cout << "Enter sales in dollars (-1 to end): ";
	cin >> sales;
	while (sales != -1)
	{
		cout << "Salary is: $" << setprecision(2) << fixed << 200 + 0.09 * sales << endl << endl;
		cout << "Enter sales in dollars (-1 to end): ";
		cin >> sales;
	}
}