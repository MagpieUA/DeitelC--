// ex06_29.cpp
// Exercises from Chapter 6 "How to program C++ 8th edition"

/*
An integer is said to be prime if it’s divisible by only 1 and itself. For
example, 2, 3, 5 and 7 are prime, but 4, 6, 8 and 9 are not.
a) Write a function that determines whether a number is prime.
b) Use this function in a program that determines and prints all the prime
numbers between 2 and 10000. How many of these numbers do you really have to
test before being sure that you’ve found all the primes?
c) Initially, you might think that n/2 is the upper limit for which you must
test to see whether a number is prime, but you need only go as high as the
square root of n. Why? Rewrite the program, and run it both ways. Estimate the
performance improvement.
*/

#include <iostream>
#include <iomanip>
using namespace std;

bool isPrimeHalf(int number)
{
	for (int i = 2; i <= number / 2; i++)
		if ((number % i) == 0)
			return false;
	return true;
}

bool isPrimeRoot(int number)
{
	for (int i = 2; i <= sqrt(static_cast<float>(number)); i++)
		if ((number % i) == 0)
			return false;
	return true;
}

int main()
{
	cout << "All primes between 2 and 1000 is: " << endl;
	for (int number = 2; number <= 100000; number++)
	{
		if (isPrimeHalf(number))
			cout << setw(8) << number;
	}
	cout << endl;
	cout << "And now same with other function: " << endl;
	for (int number = 2; number <= 100000; number++)
	{
		if (isPrimeHalf(number))
			cout << setw(8) << number;
	}
	cout << endl;
}