// ex06_37.cpp
// Exercises from Chapter 6 "How to program C++ 8th edition"

/*
Write a nonrecursive function fibonacci(n) that uses type int to calculate the
n-th Fibonacci number. (b) Determine the largest int Fibonacci number that can
be printed on your system. Modify the program of part (a) to use double instead
of int to calculate and return Fibonacci numbers, and use this modified program
to repeat part(b).
*/

#include <iostream>
#include <limits>
using namespace std;

int fibonacci(int n)
{
	int fib1 = 1;
	int fib2 = 1;
	int fibSum = 2;
	int count = 2;
	while (count <= n)
	{
		fibSum = fib1 + fib2;
		fib1 = fib2;
		fib2 = fibSum;
		count++;
	}
	return fibSum;
}

double dfibonacci(int n)
{
	double fib1 = 1;
	double fib2 = 1;
	double fibSum;
	int count = 2;
	while (count <= n)
	{
		fibSum = fib1 + fib2;
		fib1 = fib2;
		fib2 = fibSum;
		count++;
	}
	return fibSum;
}

int main()
{
	int detector = 0;
	int counter = 2;
	int fib = fibonacci(2);
	// determine largest int Fibonacci number that can be printed on your system.
	//fibonacci(n+1) must be > fibonacci(n). If else = limit reached
	while (fib > detector)
	{
		counter++;
		detector = fib;
		fib = fibonacci(counter);
	//	cout << fib << endl;
	}
	cout << "Largest int Fibonacci number that can be printed on this system is: " << detector;
	cout << " which is " << counter << " number in Fibonacci sequence" << endl << endl;
	// Now determine same for double Fibonacci number
	double dDetector;
	counter = 2;
	double dFib = dfibonacci(counter);
	while (dFib > dDetector)
	{
		counter++;
		dDetector = dFib;
		dFib = dfibonacci(counter);
	//  cout << dFib << endl;
	}
	cout << "Largest double Fibonacci number that can be printed on this system is: " << dDetector;
	cout << " which is " << counter << " number in Fibonacci sequence" << endl;
}