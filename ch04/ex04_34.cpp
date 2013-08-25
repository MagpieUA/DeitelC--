// ex04_34.cpp
// Exercises from Chapter 4 "How to program C++ 8th edition"

/*
a) Write a program that reads a nonnegative integer and computes and prints its
factorial.
b) Write a program that estimates the value of the mathematical constant e by
using the formula:
	e = 1 + 1/1! + 1/2! + 1/3! + 1/4! + ... 
Prompt the user for the desired accuracy of e (i.e., the number of terms in the summation).
c) Writea programthatcomputesthe value of e^x by using the formula:
	e^x =  1 + x/1! + x^2/2! + x^3/3! + ...
Prompt the user for the desired accuracy of e (i.e., the number of terms in the summation).
*/

#include <iostream>
using namespace std;

int fact( int n)
{
	int counter = 1;
	int result = 1;
	while (counter <= n)
	{
		result *= counter;
		counter++;
	}
	return result;
}

double estimateE( int acc)
{
	double result = 1;
	int counter = 1;
	while (counter <= acc)
	{
		result += 1.0 / fact(counter);
		counter ++;
		}
	return result;
}

double estimateEpowX (int acc, double x)
{
	double result = 1;
	int counter = 1;
	double powX = x;
	while (counter <= acc)
	{
		result += powX / fact(counter);
		powX *= x;
		counter++;		
	}
	return result;
}

int main()
{
	int n, acc;  // base of factorial for a) and accuracy for b) and c)
	double x;  // x for c)
	// a)
	cout << "Enter factorial base: ";
	cin >> n;
	cout << "Factorial of " << n << " is: " << fact(n) << endl;
	
	// b)
	cout << "Enter desired accuracy of e and e^x: (<= 13) ";
	cin >> acc;
	cout << "Constant e with accuracy " << acc << " is: " << estimateE(acc) << endl;
	
	// c)
	cout << "Enter x: ";
	cin >> x;
	cout << "e^" << x << " with accuracy " << acc << " is: " << estimateEpowX(acc, x) << endl;	
}