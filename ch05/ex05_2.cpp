// ex05_2.cpp
// Exercises from Chapter 5 "How to program C++ 8th edition"

/*
Writea C++ statement or a set of C++ statements to accomplish each of the following:
a) Sum the odd integers between 1 and 99 using a for statement. Assume the
	integer variables sum and count have been declared.
b) Print the value 333.546372 in a 15-character field with precisions of 1, 2
	and 3. Print each number on the same line. Left-justify each number in its
	field. What three values print?
c) Calculate the value of 2.5 raised to the power 3 using function pow. Print
	the result with a precision of 2 in a field width of 10 positions. What prints?
d) Print the integers from 1 to 20 using a while loop and the counter variable x.
	Assume that the variable x has been declared, but not initialized. Print only
	5 integers per line.
[Hint: When x%5 is 0, print a new line character; otherwise, print a tab character.]
e) Repeat Exercise5.2(d) using a for statement.
*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	// a)
	int sum;
	int counter;
	sum = 0;
	for (counter = 1; counter <= 99; counter += 2)
	{
		sum += counter;
	}
	cout << "Sum of odd integers between 1 and 99 is: " << sum << endl << endl;
	
	// b)
	double value = 333.546372;
	cout << fixed << setprecision (1) << left << setw (15) << value;
	cout << setprecision (2) << setw (15) << value;
	cout << setprecision (3) << setw (15) << value << endl << endl;
	cout << right;

	// c)
	value = pow (2.5, 3);
	cout << fixed << setprecision (2) << setw (10) << value << endl << endl;
	
	// d)
	int x;
	x = 1;
	while (x <= 20)
	{
		cout << x;
		if (x % 5 == 0)
			cout << "\n";
		else
			cout << "\t";
		x++;
	}
	cout << endl;
	
	// e)
	for (x = 1; x <= 20; x++)
	{
		cout << x;
		if (x % 5 == 0)
			cout << "\n";
		else
			cout << "\t";
	}
	cout << endl;
}
