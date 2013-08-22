// ex04_5.cpp
// Exercises from Chapter 4 "How to program C++ 8th edition"

// Combine the statements that you wrote in Exercise 4.4 into a program that calculates 
// and prints the sum of the integers from 1 to 10. Use the while statement to loop
// through the calculation and increment statements.The loop should terminate
// when the value of x becomes 11.
#include <iostream>
using namespace std;

int main()
{
	int x = 1;
	int sum = 0;
	while (x < 11)
	{
		sum += x;
		x++;
	}
	cout << << "The sum of the integers from 1 to 10 is: " << sum << endl;
}