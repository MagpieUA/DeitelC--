// ex05_19.cpp
// Exercises from Chapter 5 "How to program C++ 8th edition"

/*
Calculate the value of PI from the infinite series:
PI = 4 - 4/3 + 4/5 - 4/7 + 4/9 - 4/11 + ...
Print a table that shows the approximate value of PI after each of the first
1000 terms of this series.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double pi = 0; // initial PI
	bool sign = true; // determines sign, true for + and false for -
	cout << setw(16) << "Iteration" << setw(16) << fixed << setprecision (8) << "PI" << endl;
	for (int i = 1; i <= 2000; i += 2)
	{
		if (sign)
			pi += 4.0/i;
		else
			pi -= 4.0/i;
		sign = !sign;
		cout << setw(16) << (i + 1) / 2 << setw(16) << pi << endl;
	}
}