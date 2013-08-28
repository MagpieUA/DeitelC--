// ex06_28.cpp
// Exercises from Chapter 6 "How to program C++ 8th edition"

/*
An integer is said to be a perfect number if the sum of its divisors, including
1 (but not the number itself), is equal to the number. For example, 6 is a
perfect number, because 6 = 1 + 2 + 3. Write a function isPerfect that
determines whether parameter number is a perfect number. Use this function in a
program that determines and prints all the perfect numbers between 1 and 1000.
Print the divisors of each perfect number to confirm that the number is indeed
perfect. Challenge the power of your computer by testing numbers much larger
than 1000.
*/

#include <iostream>
#include <iomanip>
using namespace std;

bool isPerfect(int number)
{
	// 1 is always divisor, so initial sum is 1 and loop started from 2
	// maximum divisor not equal to number not larger than number/2
	int sumOfDivisors = 1;  
	for (int i = 2; i <= number / 2; i++) 
	{
		if ((number % i) == 0)
			sumOfDivisors += i;
	}
	return (sumOfDivisors == number);
}

int main()
{
	cout << "Perfect numbers between 1 and 1000 (first number, then divisors: " << endl;
	for (int number = 1; number <= 1000; number++)
	{
		if (isPerfect(number))
		{
			cout << setw(8) << number << " = " << setw(5) << "1";
			for (int i = 2; i <= number / 2; i++) 
			{
				if ((number % i) == 0)
					cout << " + " << setw(5) << i;
			}
			cout << endl;
		}
	}
}